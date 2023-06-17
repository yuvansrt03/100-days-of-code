#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<vector<int>>v;
    for(int i=0;i<n;i++){
        int s,e,c;
        cin>>s>>e>>c;
        v.push_back({s,e,c});
    }

    int dp[49]={0};
    for(int i=1;i<=48;++i){
        dp[i]=dp[i-1];
        for(int j=0;j<n;++j){
            if(v[j][1]==i){
                dp[i]=max(dp[i],v[j][2]+dp[v[j][0]]);
            }
        }
    }
    cout<<dp[48]<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
