class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[256]={0};
        for(char c:s) arr[c-'0']++;
        for(char c:t) {
            arr[c-'0']--;
            if(arr[c-'0']<0) return false;
        }
        for(int i:arr){
            if(i!=0) return false;
        }
        return true;
        
    }
};

