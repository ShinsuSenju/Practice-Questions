class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int count = numBottles;
        while(numBottles>=numExchange){
            count+=numBottles/numExchange;
            int rem = numBottles%numExchange;
            numBottles/=numExchange;
            numBottles+=rem;
        }
        return count;
        
    }
};
