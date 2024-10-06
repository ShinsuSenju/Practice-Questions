public class Solution {

    void getList(int[] candidates, int sum, List<List<Integer>> ans, List<Integer> temp, int n) {
        if (sum == 0) {
            ans.add(new ArrayList<>(temp));
            return;
        }
        if (sum < 0 || n <= 0) return;

        temp.add(candidates[n - 1]);
        getList(candidates, sum - candidates[n - 1], ans, temp, n);
        temp.remove(temp.size() - 1);
        getList(candidates, sum, ans, temp, n - 1);
    }

    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> temp = new ArrayList<>();
        int n = candidates.length;
        getList(candidates, target, ans, temp, n);
        return ans;
    }
}

