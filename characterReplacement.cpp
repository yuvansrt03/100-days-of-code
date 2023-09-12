class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0,j=0,m[26]={0},Max=INT_MIN,ans=0;
        for(int i=0;i<s.length();i++){
            Max=max(Max,++m[s[i]-'A']);
            if(i-j+1 - Max>k)m[s[j++]-'A']--;
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};
