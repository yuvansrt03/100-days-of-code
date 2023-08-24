class Solution {
public:
    int binary_search_vector(vector<vector<int>>& arr,int l,int r,int x){
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (x>=arr[m][0] && x<=arr[m][arr[0].size()-1])
                return m;
            if (arr[m][0] < x)
                l = m + 1;
            else
                r = m - 1;
        }
        return -1;
    }
    int binarySearch(vector<int>arr,int l,int r,int x){
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (arr[m] == x)
                return m;
            if (arr[m] < x)
                l = m + 1;
            else
                r = m - 1;
        }
        return -1;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int vecmid=binary_search_vector(matrix,0,matrix.size()-1,target);
        if(vecmid==-1)return 0;
        int mid=binarySearch(matrix[vecmid],0,matrix[0].size()-1,target);
        if(mid==-1)return 0;
        return -1;
    }
};
