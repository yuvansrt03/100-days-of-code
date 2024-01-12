class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum=0;
        for(auto x:nums)sum=sum^x;
        int bit=1;
        int ans=0;
        int i=0;
        while(bit<=max(sum,k)){
            bit=1<<i;
            if(sum&bit ^ k&bit)ans++;
            i++;
        }
        return ans;
    }
};
