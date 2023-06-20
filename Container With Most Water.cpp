class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxe=INT_MIN;
        int area;
        int i=0;
        int j=n-1;
        while(i<j){
            area=min(height[i],height[j])*(j-i);
            maxe=max(maxe,area);
            if(height[i]<height[j])i++;
            else if(height[i]>height[j])j--;
            else{
                i++;
                j--;
            }
        }
        return maxe;
    }
};
