class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        sort(stones.rbegin(), stones.rend());
        while(stones.size() > 1) {
            if(stones[0] == stones[1]) stones.erase(stones.begin(), stones.begin()+2);
            else {
                stones[0] = stones[0]-stones[1];
                stones.erase(stones.begin()+1, stones.begin()+2);
                sort(stones.rbegin(), stones.rend());
            }
        }
        if(stones.size() == 0) return 0;
        return stones[0];
    }
};