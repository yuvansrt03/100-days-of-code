#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
        int idx=-1;
        for(int i=permutation.size()-2;i>=0;i--){
            if(permutation[i]<permutation[i+1]){
                idx=i;
                break;
            }
        }
        if(idx!=-1){
            for(int i=permutation.size()-1;i>=0;i--){
                if(permutation[i]>permutation[idx]){
                    swap(permutation[i],permutation[idx]);
                    break;
                }
            }
        }
        reverse(permutation.begin()+idx+1,permutation.end());
        return permutation;
}
