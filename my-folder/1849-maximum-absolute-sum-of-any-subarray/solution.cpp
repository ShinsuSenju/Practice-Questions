class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int sum = 0;
        int sumNeg = 0;
        for(auto e:nums){
            sum += e;
            if(sum > e){
                sum = e;
            }
            sumNeg = min(sumNeg,sum);
        }

        int sumPos = 0;
        sum = 0;
        for(auto e:nums){
            sum += e;
            if(sum < 0){
                sum = 0;
            }
            sumPos = max(sumPos,sum);
        }

        return max(sumPos,abs(sumNeg));

    }
};
