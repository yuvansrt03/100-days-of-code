class Solution {
private:
    bool checkstr(char x,string s){
        for(auto c:s){
            if(c!=x)return false;
        }
        return true;
    }
public:
    string removeDuplicates(string s, int k) {
        string ans="";
        for(auto c:s){
            ans.push_back(c);
            int n=ans.length();
            if(n>=k && checkstr(ans[n-1],ans.substr(n-k,k))){
                for(int i=0;i<k;i++)ans.pop_back();
            }
        }
        return ans;
    }
};
