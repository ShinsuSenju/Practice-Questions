class Solution {
    public int myAtoi(String s) {
        int sign = 1;
        int i = 0;
        int n = s.length();
        if (n == 0) return 0;
        while (i < n && s.charAt(i) == ' ') i++;
        if (i == n) return 0;
        if (s.charAt(i) == '-') {
            sign = -1;
            i++;
        } else if (s.charAt(i) == '+') {
            i++;
        }
        long ans = 0;
        while (i < n && Character.isDigit(s.charAt(i))) {
            ans = ans * 10 + (s.charAt(i) - '0');
            if (sign == 1 && ans > Integer.MAX_VALUE) return Integer.MAX_VALUE;
            if (sign == -1 && -ans < Integer.MIN_VALUE) return Integer.MIN_VALUE;
            i++;
        }
        
        return (int) (ans * sign);
    }
}

