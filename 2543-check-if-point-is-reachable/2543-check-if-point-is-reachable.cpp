class Solution {
public:
    bool isReachable(int targetX, int targetY) {
        long long int gcd = __gcd(targetX,targetY);

        for(int i=0;i<31;i++){
            if(gcd == pow(2,i)){
                return true;
            }
        }

        return false;
    }
};