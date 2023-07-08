class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>temp=nums;
        sort(temp.begin(),temp.end());
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            if(nums[i]==temp[i])i++;
            else if(nums[j]==temp[j])j--;
            else break;
        }
        if(i==j)return 0;
        else return j-i+1;
    }
};
