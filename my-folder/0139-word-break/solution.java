
class Solution {
    int[] dp = new int[301];

    private boolean solve(Set<String> st, String s, int idx) {
        if (idx >= s.length()) {
            return true;
        }
        if (dp[idx] != 0) {
            return dp[idx] == 1;
        }

        for (int i = 1; i + idx <= s.length(); i++) {
            String temp = s.substring(idx, idx + i);
            if (st.contains(temp)) {
                if (solve(st, s, idx + i)) {
                    dp[idx] = 1;
                    return true;
                }
            }
        }

        dp[idx] = -1;
        return false;
    }

    public boolean wordBreak(String s, List<String> wordDict) {
        Set<String> st = new HashSet<>(wordDict);
        Arrays.fill(dp, 0);
        return solve(st, s, 0);
    }
}

