class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>stack1;
        stack<char>stack2;
        int n=s.length();
        int m=t.length();
        for(int i=0;i<n;i++){    
            if(s[i]=='#' && stack1.size()>0)stack1.pop();
            else if(s[i]!='#')stack1.push(s[i]); 
        }
        for(int j=0;j<m;j++){
            if(t[j]=='#' && stack2.size()>0)stack2.pop();
            else if(t[j]!='#')stack2.push(t[j]);
        }
        if(stack1.size()!=stack2.size())return 0;
        while(!stack1.empty() && !stack2.empty()){
            if(stack1.top()!=stack2.top())return 0;
            stack1.pop();stack2.pop();
        }
        return 1;
    }
};
