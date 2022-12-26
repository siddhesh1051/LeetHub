class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
       int ans = 0;
        sort(players.rbegin(),players.rend());
        sort(trainers.rbegin(),trainers.rend());
        
        int i=0, j=0;
        
        while(i<players.size() && j<trainers.size()){
            if(players[i]<=trainers[j]){
                ans++;
                i++;
                j++;
                    
            }
            else{
                i++;
            }
        } 
        return ans;
    }
};