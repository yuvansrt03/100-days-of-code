class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        priority_queue<pair<int,int>>p1;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p2;
        int n=capital.size();
        for(int i=0;i<n;i++){
            if(capital[i]<=w)p1.push({profits[i],capital[i]});
            else p2.push({capital[i],profits[i]});
        }
        while(k>0 && !p1.empty()){
            if(!p1.empty()){
                w+=(p1.top().first);
                k--;
                p1.pop();
            }
            while(!p2.empty() && p2.top().first<=w){
                p1.push({p2.top().second,p2.top().first});
                p2.pop();
            }
        }
        return w;
    }
};
