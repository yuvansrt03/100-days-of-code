class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int first=0,mid;
        int last=nums.size()-1;
        while(first<=last){
            mid=(first+last)/2;
            if(nums[mid]>target)last=mid-1;
            else if(nums[mid]<target)first=mid+1;
            else return mid;
        }
        return first;
    }
};
