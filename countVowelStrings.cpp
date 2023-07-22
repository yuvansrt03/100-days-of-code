class Solution {
public:
    int countVowelStrings(int n) {
        int arr[5]={1,1,1,1,1};
        int sum=5;
        for(int i=1;i<n;i++){
            for(int j=0;j<5;j++){
                sum=0;
                for(int k=j;k<5;k++)sum+=arr[k];
                arr[j]=sum;
            }
        }
        sum=0;
        for(int k=0;k<5;k++)sum+=arr[k];
        return sum;
    }
};
