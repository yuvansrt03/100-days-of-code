class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
        int start=-1,end=-1,i=0;
        bool done=false;
        while(i<intervals.size()){
            start=intervals[i][0];
            end=intervals[i][1];
            if(!done && end>=newInterval[0] && start<=newInterval[1]){
                start=min(newInterval[0],start);
                if(intervals[i][1]>=newInterval[1]){
                    end=intervals[i][1];
                    i++;
                }
                else{
                    while(i<intervals.size() && newInterval[1]>=intervals[i][0]){
                        end=max(newInterval[1],intervals[i][1]);
                        i++;
                    }
                }
                done=true;
                ans.push_back({start,end});
                if(i>=intervals.size())break;
                start=intervals[i][0];
                end=intervals[i][1];
            }
            ans.push_back({start,end});
            i++;
        }
        if(!done){
            int it=0;
            while(it<intervals.size() && intervals[it][0]<newInterval[0])it++;
            ans.insert(ans.begin()+it,newInterval);
        }
        return ans;
    }
};
