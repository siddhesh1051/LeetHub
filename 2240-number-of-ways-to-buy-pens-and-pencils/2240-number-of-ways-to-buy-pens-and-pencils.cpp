class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long ans = 0;
        int cnt = total / cost1;
        for(int i = 0; i <= cnt; i++) {
            int rem = total - (i*cost1);
            if(rem >= 0) {
                ans += (rem/cost2) + 1;
            }
        }
        return ans;
    }
};