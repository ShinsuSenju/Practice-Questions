class Solution {
public:
    int minimumAddedCoins(vector<int>& coins, int target) {
        int obtainable =0;
        int add = 0;
        sort(coins.begin(),coins.end());
        for(auto coin:coins){
            while(coin > obtainable+1){
                add++;
                int newc=obtainable+1;
                obtainable+= newc;
                if(obtainable>=target) return add;
            }
            obtainable+=coin;
            if(obtainable>=target) return add;
        }
        while(obtainable<target){
            add++;
            int newc = obtainable+1;
            obtainable+=newc;
            if(obtainable>=target) return add;

        }
        return add;
    }

};