class Solution {
    long solve(String s, int i, long sum) {
        if (i >= s.length() || !Character.isDigit(s.charAt(i))) return sum;
        sum = sum * 10 + (s.charAt(i) - '0');
        if (sum > Integer.MAX_VALUE) return sum;
        return solve(s, i + 1, sum);
    }
    public int myAtoi(String s) {
        if (s == null || s.length() == 0) return 0;
        int i = 0;
        while (i < s.length() && s.charAt(i) == ' ') i++;
        if (i >= s.length()) return 0;
        int sign = 1;
        if (s.charAt(i) == '-') {
            sign = -1;
            i++;
        } else if (s.charAt(i) == '+') {
            i++;
        }
        long ans = solve(s, i, 0);
        if (ans > Integer.MAX_VALUE) {
            return sign == 1 ? Integer.MAX_VALUE : Integer.MIN_VALUE;
        }
        return (int) (ans * sign);
    }
}

