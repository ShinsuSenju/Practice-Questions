class Solution {
    public String largestOddNumber(String num) {
        StringBuilder ans = new StringBuilder();
        int n = num.length();
        for(int i = n-1; i>=0;i--){
            char c = num.charAt(i);
            if((c-'0')%2!=0) return num.substring(0,i+1);
        }
        
        return "";
        
    }
}
