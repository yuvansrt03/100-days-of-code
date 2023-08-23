class Solution {
public:
    bool comparator(vector<int> a,vector<int>b){
        return a[0]<b[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        int start=-1,end=-1;
        for(int i=0;i<intervals.size();i++){
            // cout<<intervals[i][0]<<"start="<<start<<"\nend="<<endl;
            if(start==-1 && end==-1){
                start=intervals[i][0];
                end=intervals[i][1];
            }
            else if(intervals[i][0]<=end){
                end=max(intervals[i][1],end);
            }
            else{
                ans.push_back({start,end});
                start=intervals[i][0];
                end=intervals[i][1];
            }
        }
        ans.push_back({start,end});
        return ans;
    }
};
