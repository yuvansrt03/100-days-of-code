class Solution {
public:
    bool solve(string s,int ind,vector<string>&wordDict,vector<int>&dp){
        if(ind>=s.length())return 1;

        if(dp[ind]!=-1)return dp[ind];

        string containString="";
        bool res=false;

        for(int i=ind;i<s.length();i++){
            containString+=s[i];
            res=res||(find(wordDict.begin(),wordDict.end(),containString)!=wordDict.end() && solve(s,i+1,wordDict,dp));
        }
        dp[ind]=res;
        return res;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<int>dp(s.length(),-1);
        return solve(s,0,wordDict,dp);
    }
};
