class Solution {
public:
    int minimumPushes(string word) {
        if (word.size() <= 7)
            return word.size();
        else if (word.size() <= 15)
            return (word.size() - 8) * 2 + 8;
        else if(word.size()<=23)
            return 8 + 16 + (word.size() - 16) * 3;
        else
            return 8 + 16 + 24 + (word.size()-24)*4;
    }
};
