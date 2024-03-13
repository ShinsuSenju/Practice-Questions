class Solution {
public:
    int check(vector<int> v,int divisor,int threshold){
        int sum = 0;
        for(int i=0;i<v.size();i++){
            sum += ceil((double)(v[i]) / (double)(divisor));
            if(sum>threshold) return 0;
        }
        // if(sum<=threshold) return 1;
        // else return 0;
        return 1;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        if (n > threshold) return -1;
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid = low + (high-low)/2;
            int canIt = check(nums,mid,threshold);
            if(canIt==1) high = mid-1;
            else low = mid+1;

        }
        return low;
        
    }
};
