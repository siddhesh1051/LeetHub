class Solution {
public:
    
    int digitSum(int num){
        int sum = 0;
        while(num!=0){
            sum+=(num%10);
            num = num/10;
        }
        return sum;
    }
    
    int maximumSum(vector<int>& nums) {
        
        
         sort(nums.begin(), nums.end());
        unordered_map<int,vector<int>> mp;
        for(int i = 0; i < nums.size(); i++)
        {
            // find sum of digit
            
            int sum = digitSum(nums[i]);
            
            // push into mp
            
            mp[sum].push_back(nums[i]);
        }
        int maxi = -1;
        
        for(auto x : mp)
        {
            auto v = x.second;
            
            // find sum of two maximum element and update maxi
            
            if(v.size() >= 2)
            {
                maxi = max(maxi, v[v.size() - 1] + v[v.size() - 2]);
            }
        }
        return maxi;
    }
};