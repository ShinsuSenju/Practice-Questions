class Solution {
    public int[] findMissingAndRepeatedValues(int[][] grid) {
        int n = grid.length;
        int total = n * n;  

        long expSum = (long) total * (total + 1) / 2;
        long expSumSq = (long) total * (total + 1) * (2 * total + 1) / 6;

        long actSum = 0;
        long actSumSq = 0;

        for (int[] row : grid) {
            for (int num : row) {
                actSum += num;
                actSumSq += (long) num * num;
            }
        }

        long diff = actSum - expSum; // y - x
        long diffSq = actSumSq - expSumSq; // y^2 - x^2

        long sum = diffSq / diff; // y + x

        int repeated = (int) ((diff + sum) / 2);
        int missing = (int) (repeated - diff);

        return new int[]{repeated, missing};
    }
}

