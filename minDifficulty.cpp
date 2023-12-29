int dp[301][301][11];
class Solution {
public:
    int dfs(vector<int>&v,int start,int end,int d){
        if(d>(end-start))return INT_MAX/4;
        if(dp[start][end][d]!=-1)return dp[start][end][d]; 
        // cout<<start<<" "<<end<<endl;
        // if(start==end-1)return 0;
        if(d<=1)return helper(v,start,end);
        int ans=INT_MAX;
        for(int i=start+1;i<end;i++){
            // cout<<"I="<<i<<"J="<<end<<endl;
            int left=helper(v,start,i);
            int right=dfs(v,i,end,d-1);
            // cout<<left<<" "<<right<<endl;
            ans=min(ans,left+right);
        }
        dp[start][end][d]=ans;
        return ans;
    }
    int helper(vector<int> &v,int i,int j){
        // cout<<"i= "<<i<<"j= "<<j<<endl;
        int ans=INT_MIN;
        for(int x=i;x<j;x++){
            ans=max(ans,v[x]);
        }
        return ans;
    }
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        memset(dp,-1,sizeof(dp));
        if(d>jobDifficulty.size())return -1;
        return dfs(jobDifficulty,0,jobDifficulty.size(),d);
    }
};
