class Solution {
public:
    int maximizeSquareArea(int m, int n, vector<int>& hFences, vector<int>& vFences) {
        
        hFences.push_back(1);
        hFences.push_back(m);
        vFences.push_back(1);
        vFences.push_back(n);

       
        unordered_set<int> vdiff;
        for(int i=0;i<vFences.size()-1;i++){
            for(int j=i+1;j<vFences.size();j++){
                int diff = vFences[i]-vFences[j];
                vdiff.insert(abs(diff));
                
            }

        }
        long long area=0;  
        const int MOD = 1000000007;
        for(int i=0;i<hFences.size()-1;i++){
            for(int j=i+1;j<hFences.size();j++){
                if(vdiff.count(abs(hFences[i]-hFences[j]))>0){
                    area = max(area,(long long)abs(hFences[i]-hFences[j]));
                }
                
            }

        }
        return area>0?((area*area)%MOD): -1;
    }
};