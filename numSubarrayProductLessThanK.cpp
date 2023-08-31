class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        long long ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int j=i;
            int product=nums[i];
            while(j<n && product<k){
                ans++;
                if(++j<n)product*=nums[j];
            }
        }
        return ans;
    }
};
