class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int ans = 0;
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[0].size(); j++) {
                if (mat[i][j] == 1 && accumulate(mat[i].begin(), mat[i].end(), 0) == 1 &&
                    accumulate(mat.begin(), mat.end(), 0, [j](int sum, const vector<int>& row) { return sum + row[j]; }) == 1) {
                    ans++;
                }
            }
        }
        return ans;
    }
};
