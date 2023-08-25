class Solution {
public:
    int count=0;
    int uniquePaths(int m, int n) {
        int arr[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                arr[i][j]=0;
            }
        }
        arr[0][0]=1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==m-1 && j==n-1)return arr[i][j];
                if(i<m-1 && j<n-1){
                    arr[i+1][j]+=arr[i][j];
                    arr[i][j+1]+=arr[i][j];
                }
                else if(j==n-1 && i<m-1){
                    arr[i+1][j]+=arr[i][j];
                }
                else if(i==m-1 && j<n-1){
                    arr[i][j+1]+=arr[i][j];
                }
            }
        }
        return 0;

    }
};
