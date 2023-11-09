class Solution {
public:
    int countHomogenous(string s) {
        int left=0,right=0;
        long long sum=0;
        while (right<s.size()){
            if(s[right]==s[left]){
                int len =(right-left+1);
                sum+=len;
                right++;
            }
            else{
                left = right;
            }
        }

        return (int)(sum%(1000000007));
        
    }
};