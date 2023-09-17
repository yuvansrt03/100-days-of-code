class Solution {
public:
    bool containssubstr(int arr[],int brr[]){
        for(int i=0;i<58;i++){
            if(arr[i]!=0 && arr[i]>brr[i])return false;
        }
        return true;
    }
    void update(int &first,int &second,int i,int j){
        if(j-i+1<second-first+1){
            first=i;
            second=j;
        }
    }
    string minWindow(string s, string t) {
        string ans="";
        int n=s.length();
        int m=t.length();
        int size=INT_MAX;
        if(m>n)return ans;
        int arr[58]={0},brr[58]={0};
        for(int i=0;i<m;i++)arr[t[i]-'A']++;
        int i=0,j=0;
        while(j<n){
            brr[s[j]-'A']++;
            while(i<=j && (brr[s[i]-'A']==0 || brr[s[i]-'A']>arr[s[i]-'A']))brr[s[i++]-'A']--;
            if(containssubstr(arr,brr) && size>j-i+1){
                size=j-i+1;
                ans=s.substr(i,size);
            }
            j++;
        }

        return ans;
    }
};
