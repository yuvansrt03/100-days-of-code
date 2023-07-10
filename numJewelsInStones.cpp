class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        // map<char,int>m;
        // for(int i=0;i<jewels.size();i++)m[jewels[i]]++;
        // int count=0;
        // for(int i=0;i<stones.size();i++){if(m[stones[i]]>0)count++;}
        // return count;
        int small[26]={0};
        int large[26]={0};
        int count=0;
        for(int i=0;i<jewels.size();i++){
            // cout<<<<" ";
            if(int(jewels[i])>=97){
                small[int(jewels[i])-'a']++;
            }
            else large[int(jewels[i])-'A']++;
        }
        for(int i=0;i<stones.size();i++){
            if(int(stones[i])>=97 && small[int(stones[i])-'a']>0){
                count++;
            }
            else if(stones[i]<97 && large[int(stones[i])-'A']>0)count++;
        }
        return count;
    }
};
