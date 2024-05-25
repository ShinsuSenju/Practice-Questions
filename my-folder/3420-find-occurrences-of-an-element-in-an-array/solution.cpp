#include <algorithm>
class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        int n=*max_element(queries.begin(),queries.end());
        // for_each(nums.begin(),nums.end(),[&](int n){
        //     if(n==x) count++;
        // })
        vector<int> arr;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x) arr.push_back(i);
                
        }
        for_each(arr.begin(),arr.end(),[](int n){cout<<n<<" ";});
        cout<<endl;
        vector<int> ans;
        for(int v : queries) {
            if(v > 0 && v <= arr.size()) {
                ans.push_back(arr[v - 1]);
            } else {
                ans.push_back(-1);
            }
        }
        return ans;
    }
};
