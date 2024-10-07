class Solution {
    boolean checkPal(String s,int i, int j){
        while(i<=j){
            if(s.charAt(i++)!=s.charAt(j--)) return false;
        }
        return true;
    }
    void getPalindrome(String s,List<List<String>> ans,List<String> temp,int ind){
        if(ind==s.length()){
            ans.add(new ArrayList<>(temp));
            return;
        }
        for(int i=ind;i<s.length();i++){
            if(checkPal(s,ind,i)){
                temp.add(s.substring(ind,i+1));
                getPalindrome(s,ans,temp,i+1);
                temp.remove(temp.size()-1);
            }
        }
    }
    public List<List<String>> partition(String s) {
        List<List<String>> ans= new ArrayList<>();
        List<String> temp = new ArrayList<>();
        getPalindrome(s,ans,temp,0);
        return ans;
        
    }
}
