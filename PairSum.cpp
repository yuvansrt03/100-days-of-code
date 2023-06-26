#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   sort(arr.begin(),arr.end());
   vector<vector<int>>ans;
   int i=0;
   int j=arr.size()-1;
   while(i<j){
      if(arr[i]+arr[j]==s){
         int tempj=j;
         while(arr[i]+arr[tempj]==s && i<tempj){
            ans.push_back({arr[i],arr[tempj]});
            tempj--;
         }
         i++;
      }
      else if(arr[i]+arr[j]<s)i++;
      else if(arr[i]+arr[j]>s)j--;

   }
   return ans;

}
