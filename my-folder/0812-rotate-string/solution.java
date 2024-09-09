class Solution {
    public boolean rotateString(String s, String goal) {
        if(s.length()!=goal.length()) return false;
        String  con  = goal+goal;
        int i=0,j=0;
        int m = con.length();
        int n = s.length();
        while(i<m){
            if(con.charAt(i)==s.charAt(j)){
                i++;
                j++;
                if(j==n) return true;
            }
            else{
                if(j!=0){
                    i=i-j+1;
                    j=0;
                }
                else i++;
            }
        }
        return false;
       
    }
}
