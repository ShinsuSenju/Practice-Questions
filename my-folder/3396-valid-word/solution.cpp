class Solution {
public:
    bool isValid(string word) {
        if(word.size() < 3) return false;
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        bool hasVowel = false;
        bool hasConsonant = false;
        
        for(char c : word){
            if(isalpha(c)) { 
                if(vowels.count(tolower(c))) {
                    hasVowel = true;
                } else {
                    hasConsonant = true;
                }
            } else if (!isdigit(c)) {
                return false;
            }
        }
        
        return hasVowel && hasConsonant;
    }
};

