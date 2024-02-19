class Solution {
public:
    int removeAlmostEqualCharacters(string word) {
        int steps=0;
        int i=0;
        while(i<word.size()){
            char a = word[i];
            char b = word[i+1];
            if(abs(a-b)<=1){
                steps++;
                i+=2;
            }
            else i++;

        }
        return steps;
        
    }
};