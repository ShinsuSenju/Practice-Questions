class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int k) {
        vector<vector<int>> ans;
        int n = arr.size();
        if(n==0) return ans;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                long long int target2;
                target2 = k;
                target2-=arr[i];
                target2-=arr[j];
                int left = j+1,right = n-1;
                while(left<right){
                    if(arr[left]+arr[right]<target2) left++;
                    else if(arr[left]+arr[right]>target2) right--;
                    else{
                        vector<int> row(4,0);
                        row[0]=arr[i];
                        row[1]=arr[j];
                        row[2]=arr[left];
                        row[3]=arr[right];
                        ans.push_back(row);
                        
                        while(left<right && arr[left]==row[2]) left++;
                        while(left<right && arr[right]==row[3]) right--;
                    }
                }
                while(j+1<n && arr[j+1]==arr[j]) j++;
            }
            while(i+1<n && arr[i+1]==arr[i]) i++;
        }
        return ans;
        
    }
};