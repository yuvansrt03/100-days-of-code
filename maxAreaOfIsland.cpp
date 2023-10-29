class Solution {
public:
    int measureArea(vector<vector<int>>&temp,vector<vector<int>>&vis,int i,int j,int n,int m){
        if(i>=n || i<0 || j>=m || j<0 || vis[i][j] || !temp[i][j])return 0;
        vis[i][j]=1;
        int top=measureArea(temp,vis,i-1,j,n,m);
        int right=measureArea(temp,vis,i,j+1,n,m);
        int bottom=measureArea(temp,vis,i+1,j,n,m);
        int left=measureArea(temp,vis,i,j-1,n,m);

        return 1+top+right+bottom+left;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        vector<vector<int>>temp=grid;
        int maxArea=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(temp[i][j]==1 && vis[i][j]==0){
                    maxArea=max(maxArea,measureArea(temp,vis,i,j,n,m));
                    // cout<<measureArea(temp,vis,i,j,n,m)<<endl;
                }
            }
        }
        return maxArea;
    }
};
