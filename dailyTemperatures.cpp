class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>>st;
        unordered_map<int,int>m;

        int n=temperatures.size();
        for(int i=0;i<n;i++)m[i]=0;
        st.push({temperatures[n-1],0});

        for(int i=n-2;i>=0;i--){
            int step=1;
            if(temperatures[i]<st.top().first){
                st.push({temperatures[i],1});
            }
            else{
                // cout<<"temp"<<temperatures[i]<<endl;
                while(!st.empty() && temperatures[i]>=st.top().first){
                    int ind=st.top().second;
                    // cout<<ind<<endl;
                    st.pop();
                    step+=ind;
                }
                // cout<<endl;
                if(st.empty())st.push({temperatures[i],0});
                else st.push({temperatures[i],step});
            }
            m[i]=st.top().second;
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back(m[i]);
        }
        return ans;
    }
};
