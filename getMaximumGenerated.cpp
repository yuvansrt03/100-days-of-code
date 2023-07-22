class Solution {
public:
    int getMaximumGenerated(int n) {
        int arr[n+1];
        int count=0;
        int maxe=INT_MIN;
        for(int i=0;i<n+1;i++){
            if(i==0)arr[i]=0;
            if(i==1)arr[i]=1;
            if(i%2==0)arr[i]=arr[i/2];
            else arr[i]=arr[i/2]+arr[i/2+1];
            maxe=max(maxe,arr[i]);
        }
        return maxe;
    }
};
