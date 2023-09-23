class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int count=0;
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<pair<int,int>,int>>rottenOranges;
        vector<vector<int>>tab=grid;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    rottenOranges.push({{i,j},0});
                    vis[i][j]=2;
                }
            }
        }
        int time=0;
        while(rottenOranges.size()!=0){
            int trow=rottenOranges.front().first.first;
            int tcol=rottenOranges.front().first.second;
            int t=rottenOranges.front().second;
            time=max(time,t);
            rottenOranges.pop();
            int delRow[4]={-1,0,1,0};
            int delCol[4]={0,1,0,-1};
            for(int i=0;i<4;i++){
                int nrow=trow+delRow[i];
                int ncol=tcol+delCol[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && tab[nrow][ncol]==1){
                    tab[nrow][ncol]=2;
                    vis[nrow][ncol]=1;
                    rottenOranges.push({{nrow,ncol},t+1});
                }
            }

        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(tab[i][j]==1)return -1;
            }
        }
        return time;
        
    }
};
