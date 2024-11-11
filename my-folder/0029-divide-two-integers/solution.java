class Solution {
    public int divide(int dividend, int divisor) {
        boolean sign = true;
        if (dividend < 0 && divisor > 0) sign = false;
        if (dividend > 0 && divisor < 0) sign = false;
        if (dividend == Integer.MIN_VALUE && divisor == -1) {
            return Integer.MAX_VALUE;
        }
        long num = Math.abs((long) dividend);
        long den = Math.abs((long) divisor);
        int ans = 0;
        while (num >= den) {
            int count = 0;
            while (num >= (den << (count + 1))) {
                count++;
            }
            ans += 1 << count;
            num = num - (den << count);
        }
        if (ans >= (1L << 31)) {
            return sign ? Integer.MAX_VALUE : Integer.MIN_VALUE;
        }
        
        return sign ? ans : -ans;
    }
}

