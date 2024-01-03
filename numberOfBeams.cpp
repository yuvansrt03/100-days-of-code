class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>v;
        for(auto x:bank){
            int count=0;
            for(auto y:x){
                count+=(y=='1');
            }
            v.push_back(count);
        }
        int ans=0,prev=0;
        for(int i=0;i<bank.size();i++){
            if(!v[i])continue;
            if(!prev)prev=v[i];
            else{
                ans+=prev*v[i];
                prev=v[i];
            }
        }
        return ans;
    }
};
