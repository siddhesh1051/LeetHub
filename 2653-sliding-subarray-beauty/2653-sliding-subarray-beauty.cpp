class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        
        vector<int> mem(101,0),ans;
        
        for(int i=0;i<nums.size();i++){
            
            mem[nums[i]+50]++;
            
            if(i<k-1) continue ;
            
            else{
                
                if(i>=k) mem[nums[i-k]+50]--;
                 
                int sum =0 ,flag = 0; 
                
                for(int i=0;i<100;i++){
                    
                    sum+= mem[i];
                    
                    if(sum>=x && i-50<0 ){
                        ans.push_back(i-50);
                        flag = true ;
                        break ;
                    }
                    
                }
                
                if(!flag) ans.push_back(0);
                
            }
            
        }
        
        return ans; 
        
    }
};