class Solution {
public:
    int dfs(vector<vector<char>>&grid,vector<vector<int>>&vis,int i,int j, char c){
        int n=grid.size();
        int m=grid[0].size();
        if(i<0 || i>=n || j<0 || j>=m || grid[i][j]!=c)return 0;
        if(vis[i][j])return 1;
        vis[i][j]=1;
        int top=dfs(grid,vis,i,j+1,c);
        int bottom=dfs(grid,vis,i,j-1,c);
        int right=dfs(grid,vis,i+1,j,c);
        int left=dfs(grid,vis,i-1,j,c);
        if(top+bottom+right+left>=2)return 2;
        return 0;
    }
    bool containsCycle(vector<vector<char>>& grid) {
        vector<vector<int>>vis(grid.size(),vector<int>(grid[0].size(),0));
        vector<vector<char>>temp=grid;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(!vis[i][j]){
                    if(dfs(grid,vis,i,j,grid[i][j])==2)return true;
                }
            }
        }
        return false;
    }
};
