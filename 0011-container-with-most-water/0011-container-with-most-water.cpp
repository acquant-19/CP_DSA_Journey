class Solution {
public:
    int maxArea(vector<int>& height) 
    { 
        int n=height.size();
        int maxarea=0,area=0,ht=0,wd=0,l=0,r=n-1;
        while(l<=r)
            {
               ht=min(height[l],height[r]);
               wd=r-l;
               area=ht*wd;
               maxarea=max(maxarea,area);
               (height[l]<height[r])?l++:r--;
            }
        return maxarea;
    }
};