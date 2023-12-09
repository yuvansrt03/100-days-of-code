class Solution {
public:
    vector<string>ans;
    void dfs(int ind,string s){
        ans.push_back(s);
        for(int i=ind;i<s.length();i++){
            if(s[i]-'a'>=0 && s[i]-'a'<26){
                s[i]=s[i]-32;
                dfs(i+1,s);
                s[i]=s[i]+32;
            }
            if(s[i]-'A'>=0 && s[i]-'A'<26){
                s[i]=s[i]+32;
                dfs(i+1,s);
                s[i]=s[i]-32;
            }
        }
    }
    vector<string> letterCasePermutation(string s) {
        dfs(0,s);
        return ans;
    }
};
