class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        int dp[n+1];
        for(int i=0;i<=n;i++)dp[i]=INT_MAX;
        dp[0]=0;
        dp[1]=0;
        for(int i=0;i<n;i++){
            if(i+1<=n)dp[i+1]=min(dp[i+1],dp[i]+cost[i]);
            if(i+2<=n)dp[i+2]=min(dp[i+2],dp[i]+cost[i]);
        }
        return dp[n];
    }
};
