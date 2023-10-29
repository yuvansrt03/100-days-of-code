class Solution {
public:
    int markClosed(vector<vector<int>>&temp,vector<vector<int>>&vis,int i,int j,int n,int m){
        if(i>=n || i<0 || j>=m || j<0)return 0;
        if(vis[i][j] || temp[i][j]==1)return 1;
        vis[i][j]=1;
        int top=markClosed(temp,vis,i-1,j,n,m);
        int right=markClosed(temp,vis,i,j+1,n,m);
        int bottom=markClosed(temp,vis,i+1,j,n,m);
        int left=markClosed(temp,vis,i,j-1,n,m);
        return top && right && bottom && left;
    }
    int closedIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        vector<vector<int>>temp=grid;

        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(temp[i][j]==0 && vis[i][j]==0){
                    ans+=markClosed(temp,vis,i,j,n,m);
                }
            }
        }
        return ans;
    }
};
