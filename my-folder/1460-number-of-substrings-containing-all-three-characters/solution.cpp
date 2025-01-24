class Solution
{       
    public:
        int numberOfSubstrings(string s){
            int lastSeen[3] = { -1,-1,-1 };
            int i = 0;
            int count = 0;
            while (i < s.size()){
                lastSeen[s[i] - 'a'] = i;
                count+=1+min(lastSeen[0],min(lastSeen[1],lastSeen[2]));
                i++;
            }
            return count;
        }
};
