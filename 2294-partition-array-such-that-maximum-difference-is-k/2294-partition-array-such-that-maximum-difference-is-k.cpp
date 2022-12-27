class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        
        int ans = 1;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i=0;
        int j=1;
        
        while(j<=(n-1)){
            if((nums[j]-nums[i])<=k){
                j++;
                
            }
            else if((nums[j]-nums[i])>k){
                ans++;
                i = j;
               
                    
                
            }
            
        }
       return ans; 
    }
};