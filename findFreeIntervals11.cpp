#include <algorithm>
vector<int> findFreeIntervals(vector<vector<int>> &schedules) {
    vector<vector<int>>intervals;
	for(int i=0;i<schedules.size();i++){
        for (int j = 0; j < schedules[i].size(); j += 2) {
        	intervals.push_back({schedules[i][j],schedules[i][j+1]});
        }
	}
	std::sort(intervals.begin(),intervals.end());

	int start=intervals[0][0];
	int end=intervals[0][1];
	vector<vector<int>>merged;
	for(int i=1;i<intervals.size();i++){
		if(intervals[i][0]<=end){
			end=max(end,intervals[i][1]);
		}
		else{
			merged.push_back({start,end});
			start=intervals[i][0];
			end=intervals[i][1];
		}
	}
	merged.push_back({start,end});
	int left=0;
	vector<int>ans;
	for(int i=0;i<merged.size();i++){
		if(merged[i][0]!=left){
			ans.push_back(left);
			ans.push_back(merged[i][0]-1);
		};
		left=merged[i][1]+1;
    }
	if (left != (int)1e8 + 1) {
		ans.push_back(left);
		ans.push_back((int)1e8);
	}
    return ans;
}
