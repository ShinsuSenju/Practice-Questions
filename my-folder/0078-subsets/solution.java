class Solution {
    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> ans = new ArrayList<>();
        int subsetLength = 1<<nums.length;
        for(int num=0;num<subsetLength;num++){
            List<Integer> temp = new ArrayList<>();
            for(int i = 0; i<nums.length;i++){
                if((num&(1<<i))!=0) temp.add(nums[i]);
            }
            ans.add(temp);
        }
        return ans;
    }
}
