class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n = costs.size()/2;
        int ans = 0;
        int a = 0;
        int b = 0;
        vector<int> diff;
        
        for(int i=0;i<(2*n);i++){
            
            //if all sent to a
            
            ans+=costs[i][0];
            
            //difference if they were sent to b
             diff.push_back(costs[i][1] - costs[i][0]);
        }
        
        sort(diff.begin(),diff.end());
        
        for(int i=0;i<n;i++){
            ans+=diff[i];
        }
        
        
        return ans;
    }
};