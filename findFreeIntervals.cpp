vector<int> findFreeIntervals(vector<vector<int>> &schedules) {
    vector<vector<int>>ans;
	for(int i=0;i<schedules.size();i++){
		for(int j=0;j<schedules[i].size();j++){
                  ans.push_back({schedules[i][j][0], schedules[i][j][1]});
                }
	}
	sort(ans.begin(),ans.end());

	vector<vector<int>>finalans;

	int start=ans[0][0];
	int end=ans[0][1];
	for(int i=1;i<ans.size();i++){
		if(ans[i][0]<end){
			end=max(end,ans[i][1]);
		}
		else{
            finalans.push_back({start, end});
            start=ans[i][0];
			end=ans[i][1];
		}
	}

	vector<vector<int>>reallyfinal;
	for(int i=0;i<n-1;i++){
		reallyfinal.push_back({finalans[i][1],finalans[i+1][0]});
	}
	return reallyfinal;

}
