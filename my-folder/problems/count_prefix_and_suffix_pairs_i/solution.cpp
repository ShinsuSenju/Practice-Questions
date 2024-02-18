class Solution {
public:
    bool isPrefixAndSuffix(string s1,string s2){
        bool flag = true;
        int size1=s1.size();
        int size2=s2.size();
        int j=0,i=0;
        if(size1>size2) return false;
        while(j<s1.size()){
            
            if(s1[j]!=s2[i] || s1[j]!=s2[size2-size1+i]) return false;
            i++;
            j++;
        }
        return true;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int count=0;
        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++)
                if(isPrefixAndSuffix(words[i],words[j])) count++;
            
        }
        return count;
        
    }
};