class Solution {
public:
    bool samevector(int a[],int b[]){
        for(int i=0;i<26;i++){
            if(a[i]!=b[i])return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length())return false;
        int a[26]={0},b[26]={0};
        for(int i=0;i<s1.length();i++)a[s1[i]-'a']++;
        int i=0,j=s1.length()-1;
        for(int k=0;k<=j;k++)b[s2[k]-'a']++;
        if(samevector(a,b))return true;
        for(int i=1,j=s1.length();j<s2.length();i++,j++){
            b[s2[j]-'a']++;
            b[s2[i-1]-'a']--;
            if(samevector(a,b))return true;
        }
        return false;
    }
};
