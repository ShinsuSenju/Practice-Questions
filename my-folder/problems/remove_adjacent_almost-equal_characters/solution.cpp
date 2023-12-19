class Solution {
public:
    int removeAlmostEqualCharacters(string word) {
        int count = 0;
        if (word.size() == 1 || word.size() == 0) return 0;
        int i=0;
        while(i<word.size()-1){
             if (abs(word[i] - word[i + 1]) == 1 || abs(word[i] - word[i + 1]) == 0) {
                count++;
                i++;
             }
             i++;
        }
        return count;
    }
};
