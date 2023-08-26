class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set;
        for(int x : nums){
            set.insert(x);
        }
        int ans = 0;
        for(int x : nums){
            if(set.find(x-1) == set.end()){
                int curr = x;
                int temp = 1;
                while(set.find(curr+1) != set.end()){
                    curr++;
                    temp++;
                }
                ans = max(ans, temp);
            }
        }
        return ans;
    }
};

