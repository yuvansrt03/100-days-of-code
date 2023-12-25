class Solution {
public:
    int dfs(string s,int i,vector<int>&memo){
        if(i==s.length())return 1;
        if(s[i]=='0')return 0;
        if(memo[i]!=-1)return memo[i];
        int firstDigit=s[i]-'0';
        int firstTwoDigits=0;
        if(i+1<s.length())firstTwoDigits=(s[i]-'0')*10+(s[i+1]-'0');
        int sum=0;

        sum=dfs(s,i+1,memo);
        if(firstTwoDigits!=0 && firstTwoDigits<=26)sum+=dfs(s,i+2,memo);
        memo[i]=sum;
        return sum;
    }
    int numDecodings(string s) {
        vector<int>memo(s.length(),-1);
        return dfs(s,0,memo);

    }
};
