class Solution {
public:
    int countTestedDevices(vector<int>& bp) {
        int count =0;
        for(int i=0;i<bp.size();i++){
            if(bp[i]>0){
                count++;
                for(int j=i+1;j<bp.size();j++){
                    if(bp[j]>0) bp[j]--;
                }
            }
            
        }
        return count;
    }
};