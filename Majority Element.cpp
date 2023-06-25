class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=nums[0],count=1;
        int tempvar=nums[0],tempcount=1;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]==tempvar){
                tempcount++;
                if(tempcount>count){
                    ans=tempvar;
                    count=tempcount;
                }
            }
            else{
                tempvar=nums[i];
                tempcount=1;
            }
        }
        return ans;   
    }
};
