class Solution {
    public int maxDepth(String s) {
        int count = 0;
        int ans = Integer.MIN_VALUE;
        for(char c:s.toCharArray()){
            if(c=='(') count++;
            else if(c==')') count--;
            ans = Math.max(count,ans);
        }
        return ans;
    }
}
