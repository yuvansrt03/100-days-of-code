class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int first=0, second=0;
        int sum=nums[first];
        int Min=INT_MAX;
        while(second<nums.size() && first<=second){ 
            if(sum>=target){
                Min=min(Min,second-first+1);
                if(first==second && second!=nums.size()-1)sum+=nums[++second];
                sum-=nums[first++]; 
            }
            else {
                second++;
                if(second<nums.size())sum+=nums[second];

            }
        }
        if(Min==INT_MAX)return 0;
        return Min;
    }
};
