class Solution {
public:
    int minimumChairs(string s) {
        int people = 0;
        int ans = 0;
        for(char c:s){
            if(c=='E') people++;
            else people--;
            ans = max(people,ans);
        }
        return ans;
    }
};
