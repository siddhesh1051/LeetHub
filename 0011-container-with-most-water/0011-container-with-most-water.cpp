class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int maxi = 0;
        int area = 0;
        int mini = height[0];
        int d = 1;
        
        while(i<j){
            d = j-i;
            mini = min(height[i],height[j]);
            area = d*mini;

            maxi = max(maxi,area);
            if(height[i]<height[j])
                i++;
            else
                j--;
            
            
        }
      
        return maxi;
        
    }
};