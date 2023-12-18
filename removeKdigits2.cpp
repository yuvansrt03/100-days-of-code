class Solution {
public:
    string removeKdigits(string num, int k) {
        if(k>=num.length())return "0";
        stack<char>st;
        for(int i=0;i<num.size();i++){
            while(k && !st.empty() && num[i]<st.top()){
                st.pop();
                k--;
            }
            st.push(num[i]);
            if(st.size()==1 && num[i]=='0')st.pop();
        }
        while(k>0 && !st.empty()){
            st.pop();
            k--;
        }
        string ans="";
        while(!st.empty())
        {
            ans.push_back(st.top()); // pushing stack top to string
            st.pop(); // pop the top element
        }
        
        reverse(ans.begin(),ans.end());
        if(ans.length()==0)return "0";
        return ans;
    }
};
