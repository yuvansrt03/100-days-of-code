int Solution::solve(vector<vector<int> > &A) {
    sort(A.begin(),A.end());
    priority_queue<int,vector<int>,greater<int>>ans;
    for(int i=0;i<A.size();i++){
        if(!ans.empty() && ans.top() <=A[i][0]){
            ans.pop();
        }
        ans.push(A[i][1]);
    }
    return ans.size();
    //vector<pair<int, int>> vec(2 * A.size());
    // for (int i = 0; i < A.size(); i++) {
    //     vec[2 * i] = {A[i][0], 1}; // 1 denotes it is a starting time
    //     vec[2 * i + 1] = {A[i][1], 0}; // 0 denotes it is a ending time
    // }
    // sort(vec.begin(), vec.end());
    // int rooms = 1;
    // for (int i = 0, intersection = 0; i < vec.size(); i++) {
    //     vec[i].second == 1 ? intersection++ : intersection--;
    //     rooms += (intersection > rooms);
    // }
    // return rooms;
}
