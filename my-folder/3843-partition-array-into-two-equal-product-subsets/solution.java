class Solution {
    public boolean checkEqualPartitions(int[] nums, long target) {
        long  tProduct = 1;
        boolean flag = true;
        for(int i:nums){
            tProduct*=i;
            if(target%i!=0) flag = false;
        }
        if(flag && tProduct == target*target) return true;
        return false;
       

        
    }
}
