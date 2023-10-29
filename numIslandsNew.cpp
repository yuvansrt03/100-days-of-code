class Solution {
public:
    void markLand(vector<vector<char>>& grid,vector<vector<int>>&vis,int i,int j,int n,int m){
        if(i>=n || i<0 || j>=m || j<0 || grid[i][j]=='0' || vis[i][j] )return;
        // cout<<i<<" "<<j<<endl;
        vis[i][j]=1;
        grid[i][j]='2';
        markLand(grid,vis,i-1,j,n,m);
        markLand(grid,vis,i,j-1,n,m);
        markLand(grid,vis,i+1,j,n,m);
        markLand(grid,vis,i,j+1,n,m);
        return;
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        vector<vector<char>>temp=grid;
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(temp[i][j]=='1' && vis[i][j]==0){
                    count++;
                    markLand(temp,vis,i,j,n,m);
                }
            }
        }
        return count;
    }
};
