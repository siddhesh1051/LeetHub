class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks){
        
        int ans = 0;
        vector<int> v;
        for(int i=0;i<capacity.size();i++){
            v.push_back(capacity[i]-rocks[i]);
            
        }
        
        sort(v.begin(),v.end());
        
        for(int i=0;i<v.size();i++){
           if(v[i]<=additionalRocks){
               ans++;
            additionalRocks-=v[i];
           }
            else
                break;
        }
        
        return ans;
    }
};