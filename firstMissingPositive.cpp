class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            while(nums[i]>0 && nums[i]-1<n && nums[i]!=nums[nums[i]-1]){
                swap(nums[i],nums[nums[i]-1]);
            }
        }
        int i=1;
        while(i<=n){
            if(nums[i-1]!=i)return i;
            i++;
        }
        return i;
    }
};
