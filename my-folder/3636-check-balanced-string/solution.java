class Solution {
    public boolean isBalanced(String num) {
        int sum1 = 0;
        for (int i = 0; i < num.length(); i++) {
            if (i % 2 == 0) {
                sum1 += num.charAt(i) - '0';
            } else {
                sum1 -= num.charAt(i) - '0';
            }
        }
        return sum1 == 0;
    }
}

