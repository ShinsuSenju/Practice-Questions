class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size(); 
        int high = *max_element(piles.begin(), piles.end());

        if(n == h) return high;
        int low = 1;
        while(low < high){
            int totalHours = 0;
            int mid = low + ((high - low) / 2);
            for(int k = 0; k < n; ++k)
                totalHours += ceil((double)piles[k] / mid);
            
            if (totalHours > h) low = mid + 1;
            else high = mid;
        }
        return low;
    }
};
