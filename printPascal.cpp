#include <bits/stdc++.h>
using namespace std;
vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>>ans;
  ans.push_back({1});
  for(int i=1;i<n;i++){
    int len=ans.size()-1;
    vector<long long int>temp;
    temp.push_back(1);
    for(int j=0;j<len;j++){
      temp.push_back(ans[len][j]+ans[len][j+1]);
    }
    temp.push_back(1);
    ans.push_back(temp);
  }
  return ans;
}
