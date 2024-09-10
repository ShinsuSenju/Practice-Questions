class Solution {
    public String reverseWords(String s) {
        Stack<String> st = new Stack<>();
        String temp = "";
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)==' '){
                if(temp.length()>0){
                    st.push(temp);
                    temp = "";
                }
            }
            else temp+=s.charAt(i);
        }
        
        if(temp.length()!=0) st.push(temp);
        temp = "";
        while(!st.isEmpty()){
            String t = st.pop();
            temp+=t;
            if(!st.isEmpty()) temp+=' ';

        }
        return temp;
        
    }
}
