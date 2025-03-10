class Solution {
public:
    long long atleastK(int k, string& word) {
        unordered_set<char> vowels{'a', 'e', 'i', 'o', 'u'};
        unordered_map<char, int> map;
        int left = 0, consonants = 0;
        long long ans = 0;

        for (int right = 0; right < word.size(); right++) {
            char ch = word[right];

            if (vowels.count(ch)) {
                map[ch]++;
            } else {
                consonants++;
            }
            while (consonants >= k && map.size() == 5) {
                ans += word.size() - right; 
                
                char c = word[left];
                if (vowels.count(c)) {
                    map[c]--;
                    if (map[c] == 0) {
                        map.erase(c);
                    }
                } else {
                    consonants--;
                }
                left++;  
            }
        }

        return ans;
    }

    long long countOfSubstrings(string word, int k) {
        return atleastK(k, word) - atleastK(k + 1, word);
    }
};

