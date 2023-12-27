#include <bits/stdc++.h>
using namespace std;
#define int long long int
string solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int wincount=n-(n/2)-1;
    string ans="";
    for(int i=0;i<n;i++){
        if(s[i]=='R'){
            ans+='P';
        }
        else if(s[i]=='S'){
            if(wincount>0){
                ans+='P';
                wincount--;
            }
            else ans+='R';
        }
        else{
            if(wincount>0){
                ans+='P';
                wincount--;
            }
            else ans+='S';
        }
    }
    return ans;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}
