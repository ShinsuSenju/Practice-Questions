class Solution {
    public int longestConsecutive(int[] nums) {
        Set<Integer> st = new HashSet<>();
        for(int num:nums){
            st.add(num);
        }
        int maxLength = 0;
        for(int num:st){
            if(!st.contains(num-1)){
                int n = num;
                int len = 1;
                while(st.contains(n+1)){
                    len++;
                    n++;
                }
                maxLength = Math.max(len,maxLength);
            }
        }
        return maxLength;
        
        
        
    }
}
