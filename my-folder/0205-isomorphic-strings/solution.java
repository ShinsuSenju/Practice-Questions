class Solution {
    public boolean isIsomorphic(String s, String t) {
        Map<Character,Character> mp = new HashMap<>();
        int i = 0,j = 0;
        while(i<s.length()){
            char ct = s.charAt(i);
            char st = t.charAt(i);
            if(!mp.containsKey(ct) && !mp.containsValue(st)){
                mp.put(ct,st);
            }
            else if(mp.containsValue(st) && !mp.containsKey(ct)){
                return false;
                
            }
            else if(mp.containsKey(ct)){
                if(mp.get(ct)!=st) return false;
            }
            i++;
        }
        return true;
        
    }
}
