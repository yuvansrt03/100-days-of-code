class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1;
        while(i<n){
            int j=i;
            while(j<n && nums[j]<=nums[i-1])j++;
            if(j==n)break;
            swap(nums[i],nums[j]);
            i++;
        }
        return i;
    }
};
