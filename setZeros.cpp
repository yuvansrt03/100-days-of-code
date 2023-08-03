#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	int n=matrix.size();
	int m=matrix[0].size();
	int row_arr[n]={0};
	int col_arr[m]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==0){
				row_arr[i]=1;
				col_arr[j]=1;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(row_arr[i]==1 || col_arr[j]==1)matrix[i][j]=0;
		}
	}
}
