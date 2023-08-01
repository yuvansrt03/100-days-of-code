class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int arr[200]={0};
        int i=0,j=0;
        int maxe=0;
        int count=0;
        while(j<s.length()){
            if(!arr[s[j]]){
                arr[s[j]]=arr[s[j]]^1;
                count++;
                maxe=max(maxe,count);
                j++;
            }
            else {
                count--;
                arr[s[i]]--;
                i++;
            }
        }
        return maxe;

    }
};
