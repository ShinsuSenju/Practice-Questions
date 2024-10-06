class Solution {
    public int maxGoodNumber(int[] nums) {
        String[] s = new String[nums.length];
        for (int i = 0; i < nums.length; i++) {
            s[i] = Integer.toBinaryString(nums[i]);
        }

        Arrays.sort(s, (x, y) -> {
            String xy = x + y;
            String yx = y + x;
            return yx.compareTo(xy);
        });

        StringBuilder ans = new StringBuilder();
        for (String temp : s) {
            ans.append(temp);
        }

        return Integer.parseInt(ans.toString(), 2);
    }
}

