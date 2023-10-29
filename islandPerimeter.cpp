class Solution {
public:
    int IslandPerim(vector<vector<int>>&temp,vector<vector<int>>&vis,int i,int j,int n,int m){
        if(i>=n || i<0 || j>=m || j<0 || temp[i][j]==0)return 1;
        if(vis[i][j])return 0;
        vis[i][j]=1;
        int top=IslandPerim(temp,vis,i-1,j,n,m);
        int right=IslandPerim(temp,vis,i,j+1,n,m);
        int bottom=IslandPerim(temp,vis,i+1,j,n,m);
        int left=IslandPerim(temp,vis,i,j-1,n,m);
        return top+right+bottom+left;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        vector<vector<int>>temp=grid;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(temp[i][j]==1){
                    return IslandPerim(temp,vis,i,j,n,m);
                }
            }
        }
        return 0;
    }
};
