class Solution {
public:
    int maxDepth(string s) {
        stack<char> par;
        int maxi = 0;
        for(char c:s){
            if(c=='(') {
                par.push(c);
                if(par.size()>=maxi)maxi = par.size();

            }
            else if(c==')') par.pop();
        }
    return maxi;
    }
};
