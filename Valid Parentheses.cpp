class Solution {
public:
    bool isValid(string s) {
        stack<char>ans;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(ans.size()==0)ans.push(s[i]);
            else if(s[i]=='(' || s[i]=='[' || s[i]=='{')ans.push(s[i]);
            else if(s[i]==')' && ans.top()=='(')ans.pop();
            else if(s[i]==']' && ans.top()=='[')ans.pop();
            else if(s[i]=='}' && ans.top()=='{')ans.pop();
            else ans.push(s[i]);
        }
        if(ans.size()>0)return false;
        else return true;
    }
};
