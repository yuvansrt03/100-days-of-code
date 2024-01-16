#include <bits/stdc++.h> 
int dp[110][110][2];
int minmax(int i,int j,bool maxPlayer,vector<int>&basket){
    if(i==j)return maxPlayer?basket[i]:0;
    if (dp[i][j][maxPlayer] != -1) return dp[i][j][maxPlayer];
    int ans;
    if(maxPlayer){
        int left=basket[i]+minmax(i+1,j,!(maxPlayer),basket);
        int right=basket[j]+minmax(i,j-1,!(maxPlayer),basket);
        ans=max(left,right);
    }
    else{
        int left=minmax(i+1,j,!(maxPlayer),basket);
        int right=minmax(i,j-1,!(maxPlayer),basket);
        ans=min(left,right);
    }
    dp[i][j][maxPlayer]=ans;
    return ans;
}
int getMaxFruits(vector<int> &basket, int n){
    memset(dp,-1,sizeof(dp));
    return minmax(0,n-1,1,basket);
}
