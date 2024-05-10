class Solution {
public:
     static bool compare(pair<int,int>& a, pair<int,int>& b) {
    return a.first * b.second < b.first * a.second;
}

    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
       vector<pair<int,int>> fraction;
       for(int i=0;i<arr.size()-1;i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]%arr[j]!=0)
            fraction.push_back({arr[i],arr[j]});
        }
       }
       sort(fraction.begin(),fraction.end(),compare);
       return {fraction[k-1].first,fraction[k-1].second};

    }
};
