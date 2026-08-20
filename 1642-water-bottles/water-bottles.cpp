class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        
        int ans = numBottles;
        while(numBottles>=numExchange){
            int n = numBottles / numExchange;
            int r = numBottles % numExchange;

            ans = ans + n;
            numBottles = n + r;


        }
        return ans;
    }
};