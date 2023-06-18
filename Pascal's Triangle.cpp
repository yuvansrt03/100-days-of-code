class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v;
        v.push_back({1});
        for(int i=0;i<numRows-1;i++){
            vector<int>temp;
            temp.push_back(1);
            for(int j=0;j<i;j++){
                temp.push_back(v[v.size()-1][j]+v[v.size()-1][j+1]);
            }
            temp.push_back(1);
            v.push_back(temp);
        }
        return v;
    }
};
