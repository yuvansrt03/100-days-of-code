class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i=0;
        int ans=0;
        while(i<nums.size()){
            int temp=nums[i];
            if(i+1==temp)i++;
            swap(nums[i],nums[temp-1]);
            if(nums[i]==nums[temp-1]){
                ans=temp;
                i++;
            }
        }
        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }
        return 0;
    }
};
