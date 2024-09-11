class Solution {
    public String intToRoman(int num) {
         Map<String, Integer> romans = new LinkedHashMap<>();
        romans.put("M", 1000);
        romans.put("CM", 900);
        romans.put("D", 500);
        romans.put("CD", 400);
        romans.put("C", 100);
        romans.put("XC", 90);
        romans.put("L", 50);
        romans.put("XL", 40);
        romans.put("X", 10);
        romans.put("IX", 9);
        romans.put("V", 5);
        romans.put("IV", 4);
        romans.put("I", 1);

        String ans = "";
        for(Map.Entry<String, Integer> entry:romans.entrySet()){
            while(num>=entry.getValue()){
                ans+=entry.getKey();
                num-=entry.getValue();
            }
        }
        return ans.toString();  
    }
}
