class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        vector<int>v(n,0);
        int i=0,j=1;
        int num1=fruits[i];
        while(j<n && fruits[j]==fruits[i])j++;
        int num2=j<n?fruits[j]:0;
        int ans=INT_MIN;
        while(j<n){
            if(j+1<n && fruits[j+1]!=num1 && fruits[j+1]!=num2){
                ans=max(ans,j-i+1);
                i=j;
                while(i>0 && fruits[i-1]==fruits[i])i--;
                j++;
                num1=fruits[i];
                num2=fruits[j];
            }
            else j++;
        }
        ans=max(ans,j-i);
        return ans;
    }
};
