#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;
    int mod=1e9+7;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int e=0;
    for(int i=0;i<n;i++)if(arr[i]%2==0)e++;
    int ans=1;
    for(int i=0;i<e;i++){
        ans=(ans*2)%mod;
    }
    if(e==n)ans--;
    cout<<ans<<endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
