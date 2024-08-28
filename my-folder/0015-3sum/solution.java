class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        List<List<Integer>> ans = new ArrayList<>();
        Arrays.sort(nums);
        for(int i=0;i<nums.length;i++){
            if(i!=0 && nums[i]==nums[i-1]) continue;
            int low = i+1;
            int high = nums.length-1;
            while(low<high){
                int sum = nums[i]+nums[low]+nums[high];
                if(sum>0) high--;
                else if(sum<0) low++;
                else{
                    List<Integer> row = new ArrayList<>();
                    row.add(nums[i]);
                    row.add(nums[low]);
                    row.add(nums[high]);
                    ans.add(row);
                    low++;
                    high--;
                    // while(low<high && nums[low]==nums[low-1]) low++;
                    while(low<high && nums[high]==nums[high+1]) high--;
                }
            }
        }
        return ans;

        
    }
}
