class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int num=0,v=0;
        for(int i=0;i<nums.size();i++){
            if(v==0){
                num=nums[i];
                v=1;
            }
            else{
                if(nums[i]==num)v++;
                else v--;
            }
        }
        return num;
    }
};
