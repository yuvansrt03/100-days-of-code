class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>>ans;
        int n=firstList.size(),m=secondList.size();
        if(n==0 || m==0)return ans;
        int first,second,i=0,j=0;
        while(i<n && j<m){
            if(firstList[i][0]>secondList[j][1])j++;
            else if(secondList[j][0]>firstList[i][1])i++;
            else{
                first=max(secondList[j][0],firstList[i][0]);
                second=min(secondList[j][1],firstList[i][1]);
                ans.push_back({first,second});
                if(firstList[i][1]<=secondList[j][1])i++;
                else j++;
            }
        }
        return ans;
    }
};
