class Solution {
public:
    bool giveCandies(vector<int>& candies, long long k, int m){
    long long sum = 0;
    for (int c : candies) {
        sum += c / m;  
    }
    return sum >= k;  
}

    int maximumCandies(vector<int>& candies, long long k) {
        int left = 1;
        int right = *max_element(candies.begin(),candies.end());
        int ans = 0;
        while(left<=right){
            int mid = left + (right-left)/2;
            if(giveCandies(candies,k,mid)){
                ans = mid;
                left = mid+1;
            }
            else right = mid-1;
        }
       return ans; 
    }
};
