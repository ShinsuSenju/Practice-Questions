class Solution {
    public List<List<Integer>> fourSum(int[] nums, int target) {
        Arrays.sort(nums);
        int n = nums.length;
        List<List<Integer>> ans = new ArrayList<>();
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<n;j++){
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;
                long sum = nums[i]+nums[j];
                int x = j+1;
                int y = n-1;
                while(x<y){
                    long sum2 = nums[x]+nums[y];
                    if(sum+sum2>target) y--;
                    else if(sum+sum2<target) x++;
                    else{
                        ans.add(Arrays.asList(nums[i],nums[j],nums[x],nums[y]));
                        x++;
                        y--;
                        while(x<y && nums[x]==nums[x-1])x++;
                        while(x<y && nums[y]==nums[y+1])y--;
                    }
                }

            }
        }
        return ans;
        
    }
}
