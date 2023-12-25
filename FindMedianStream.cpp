class MedianFinder {
public:
    priority_queue<int>maxHeap;
    priority_queue<int,vector<int>,greater<int>>minHeap;
    int n;
    MedianFinder() {
        n=0;
    }
    
    void addNum(int num) {
        if(n%2==0){
            if(n==0)maxHeap.push(num);
            else{
                int top=minHeap.top();
                if(num>=top){
                    minHeap.pop();
                    minHeap.push(num);
                    maxHeap.push(top);
                }
                else{
                    maxHeap.push(num);
                }
            }
        }
        else{
            int top=maxHeap.top();
            if(num>top){
                minHeap.push(num);
            }
            else{
                maxHeap.pop();
                maxHeap.push(num);
                minHeap.push(top);
            }
        }
        n++;
    }
    
    double findMedian() {
        if(n%2)return maxHeap.top();
        else return (double)(maxHeap.top()+minHeap.top())/2;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
