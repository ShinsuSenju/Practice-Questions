class Solution {
    void getCombinations(String digits,List<String> ans, Map<Character,String> mp,String temp,int ind){
        if(digits.length()==temp.length()){
            ans.add(temp);
            return;
        }
        String s = mp.get(digits.charAt(ind));
        for(char c:s.toCharArray()){
            getCombinations(digits,ans,mp,temp+c,ind+1);
        }
    }
    public List<String> letterCombinations(String digits) {
        if (digits == null || digits.length() == 0) {
            return new ArrayList<>();
        }
        Map<Character,String> mp = new HashMap<>();
        mp.put('2',"abc");
        mp.put('3',"def");
        mp.put('4',"ghi");
        mp.put('5',"jkl");
        mp.put('6',"mno");
        mp.put('7',"pqrs");
        mp.put('8',"tuv");
        mp.put('9',"wxyz"); 
        List<String> ans = new ArrayList<>();
        getCombinations(digits,ans,mp,new String(),0);
        return ans;
        
    }
}
