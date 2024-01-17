#include <bits/stdc++.h> 
int dp[1100][1100];
bool recursion(string a,string b,string c,int i,int j,int k){
	if(i==a.length() && j==b.length() && k==c.length())return true;
	if(dp[i][j]!=-1)return dp[i][j];
	bool ans=false;
	if(i<a.length() && a[i]==c[k]){
		ans|=recursion(a,b,c,i+1,j,k+1);
	}
	if( j<b.length() && b[j]==c[k]){
		ans|=recursion(a,b,c,i,j+1,k+1);
	}
	dp[i][j]=ans;
	return ans;
}
bool isInterleave(string a, string b, string c){
	memset(dp,-1,sizeof(dp));
	return recursion(a,b,c,0,0,0);

}
