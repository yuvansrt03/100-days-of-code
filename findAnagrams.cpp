class Solution {
public:
    bool checkanagram(int a[],int b[]){
        for(int i=0;i<26;i++){
            if(a[i]!=b[i])return false;
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        if(s.length()<p.length())return ans;
        int a[26]={0},b[26]={0};
        for(int i=0;i<p.length();i++)a[p[i]-'a']++;
        int i=0,j=p.length()-1;
        for(int k=0;k<=j;k++)b[s[k]-'a']++;
        if(checkanagram(a,b))ans.push_back(i);
        for(int i=1,j=p.length();j<s.length();i++,j++){
            b[s[j]-'a']++;
            b[s[i-1]-'a']--;
            if(checkanagram(a,b))ans.push_back(i);
        }
        return ans;
    }
};
