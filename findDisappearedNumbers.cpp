class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        vector<int>ans;
        while(i<n){
            if(nums[i]!=nums[nums[i]-1] && i != nums[i]-1){
                swap(nums[i],nums[nums[i]-1]);
            }
            else i++;
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};
