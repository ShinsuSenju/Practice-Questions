class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int count=0;
        int i=0,j=0;
        string res="";
        int maxs = INT_MAX;
        while(j<s.size()){
            if(s[j]=='1') count++;
            while(count>k){
                if(s[i]=='1') count--;
                i++;
            }
            while(s[i]=='0'){
                i++;
            }
            if(count==k){
                int temp = j-i+1;
                string c = s.substr(i,temp);
                if(temp<maxs){
                    maxs = temp;
                    res = c;
                }
                else{
                    if(maxs==temp){
                        if(res>c) res = c;
                    }
                }
                
            }
            j++;

        }
        return res;
        
    }
};