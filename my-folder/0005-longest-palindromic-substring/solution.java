class Solution {
    public boolean isPal(String s,int left, int right){
        while(left<right){
            if(s.charAt(left++)!=s.charAt(right--)) return false;
            
        }
        return true;
    }
    public String longestPalindrome(String s) {
        int maxL = 0;
        int start = 0;
        int end = 0;
        if(s.length()==1) return s;
        for(int i=0;i<s.length();i++){
            for(int j = i;j<s.length();j++){
                if(isPal(s,i,j)){
                    if(j-i+1>maxL){
                        maxL = j-i+1;
                        start = i;
                        end = j;
                    }
                }
            }
        }
        return s.substring(start,end+1);
        
    }
}
