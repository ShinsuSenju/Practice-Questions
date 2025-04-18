class Solution {
    public String addSpaces(String s, int[] spaces) {
        StringBuilder str = new StringBuilder();
        for(int i=0,j=0;i<s.length();i++){
            if(j<spaces.length && i==spaces[j]){
                str.append(" "+s.charAt(i));
                j++;
            }
            else str.append(s.charAt(i));
        }
        return str.toString();
    }
}
