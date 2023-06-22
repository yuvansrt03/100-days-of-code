class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        for(int i=1;i<strs.size();i++){
            string temp="";
            int j=0;
            while(j<strs[i].length()){
                if(strs[i][j]==ans[j]){
                    temp+=ans[j];
                    j++;
                }
                else break;
            }
            ans=temp;
        }
        return ans;
    }
};
