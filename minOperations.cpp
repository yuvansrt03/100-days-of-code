class Solution {
public:
    int minOperations(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        unordered_map<int,int>m;
        for(auto x:nums)m[x]++;
        int ans=0;
        for(auto x:m){
            if(x.second==1)return -1;
            ans+=(x.second+2)/3;
        }
        return ans;
    }
};
