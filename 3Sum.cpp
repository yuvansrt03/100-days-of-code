class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>s;
        sort(nums.begin(),nums.end());
        int sum,n=nums.size();
        for(int i=0;i<n-1;i++){
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                    s.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(sum<0){
                    j++;
                }
                else k--;
            }
        }
        set<vector<int>>::iterator it;
        vector<vector<int>>ans;
        for(auto it=s.begin();it!=s.end();it++)ans.push_back(*it);
        return ans;
    }
};
