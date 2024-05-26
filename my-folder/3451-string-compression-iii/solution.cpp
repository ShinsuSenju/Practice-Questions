class Solution {
public:
    string compressedString(string word) {
        string comp="";
      
        int count = 1;

        for (int i = 0; i < word.size() - 1; i++) {
            if (word[i] == word[i + 1]) {
                count++;
            } else {
                while (count > 9) {
                    comp += '9';
                    comp += word[i];
                    count -= 9;
                }
                comp += to_string(count);
                comp += word[i];
                count = 1;
            }
        }

        while (count > 9) {
            comp += '9';
            comp += word[word.size() - 1];
            count -= 9;
        }
        comp += to_string(count);
        comp += word[word.size() - 1];

        return comp;
        
    }
};
