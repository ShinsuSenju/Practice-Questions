class Solution {
    List<List<Integer>> solve(int[] nums,List<List<Integer>> ans,ArrayList<Integer> temp,int start){
        ans.add(new ArrayList<>(temp));
        for(int i=start;i<nums.length;i++){
            temp.add(nums[i]);
            solve(nums,ans,temp,i+1);
            temp.remove(temp.size()-1);
        }
        return ans;
    }
    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> ans = new ArrayList<>();
        return solve(nums,ans,new ArrayList<>(),0);
        
    }
}
