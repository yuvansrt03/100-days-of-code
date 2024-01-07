class Solution {
public:
    int maximumSetSize(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m;
        for(auto x:nums1)m[x]++;
        for(auto x:nums2){
            if(m.count(x))m[x]=-1;
        }
        
        int count=0;
        int n1=nums1.size()/2;
        for(auto x:m){
            if(n1<=0)break;
            if(x.second>0){
                count++;
                n1--;
            }
        }
        for(auto it=m.begin();it!=m.end() && n1>0;it++){
            if(it->second==-1){
                count++;
                it->second=0;
                n1--;
            }
        }

        int n2=nums2.size()/2;
        for(auto y:nums2){
            if(n2<=0)break;
            if(m.count(y)==0 || m[y]==-1){
                count++;
                m[y]=0;
                n2--;
            }
        }
        return count;
    }
};
