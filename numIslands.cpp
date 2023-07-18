class Solution {
public:
    void markIslands(vector<vector<char>>& grid, int x, int y,int m,int n){
        if(x<0 || x>=m || y<0 || y>=n || grid[x][y]!='1')return;
        grid[x][y]='2';
        markIslands(grid,x-1,y,m,n);
        markIslands(grid,x+1,y,m,n);
        markIslands(grid,x,y-1,m,n);
        markIslands(grid,x,y+1,m,n);
    }
    int count=0;
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    markIslands(grid,i,j,m,n);
                    count++;
                }
            }
        }
        return count;
    }
};
