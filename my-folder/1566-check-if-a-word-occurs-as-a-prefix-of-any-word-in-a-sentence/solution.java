class Solution {

    public int isPrefixOfWord(String sentence, String searchWord) {
        String[] words = sentence.split(" ");
        for (int index = 0; index < words.length; index++) {
            if (words[index].startsWith(searchWord)) {
                return index + 1; 
            }
        }
        return -1;
    }
}

