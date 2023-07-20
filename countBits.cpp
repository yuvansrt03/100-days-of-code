class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        int i=1;
        ans.push_back(0);
        int count=1;
        int k=0;
        while(i<=n){
            ans.push_back(ans[k]+1);
            // cout<<"ans["<<k<<"]="<<ans[k]<<endl;
            count--;
            k++;
            if(count==0){
                count=i+1;
                k=0;
            }
            i++;
        }
        return ans;
    }
};
