class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int left = 0;
        int right = arr.size()-1;
        while(left<=right){
            int mid = (left+right)/2;
            if(arr[mid]-mid-1<k) left = mid+1;
            else right = mid-1;
        }
        return k+right+1;
        
    }
};
