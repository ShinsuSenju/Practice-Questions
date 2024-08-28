class Solution {
    public List<Integer> majorityElement(int[] nums) {
        int first=-1;
        int second = -1;
        int count1 =0;
        int count2 =0;
        for(int i = 0; i<nums.length;i++){
            if(count1==0 && second!=nums[i]){
                first = nums[i];
                count1++;
            }
            else if(count2==0 && first!=nums[i]){
                second = nums[i];
                count2++;
            }
            else if(nums[i]==first) count1++;
            else if(nums[i]==second) count2++;
            else{
                count1--;
                count2--;
            }
            
        }
        count1=count2=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]==first ) count1++;
            else if(nums[i]==second ) count2++;
        }
        List<Integer> ans = new ArrayList<>();
        if(count1>nums.length/3) ans.add(first);
        if(count2>nums.length/3) ans.add(second);
        return ans;
        
    }
}
