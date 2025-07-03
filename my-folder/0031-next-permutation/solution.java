class Solution {
    public void nextPermutation(int[] nums) {
        int idx1 = -1;
        int idx2 = -1;

        for(int i = nums.length - 1; i > 0; i--) {
            if(nums[i] > nums[i - 1]) {
                idx1 = i - 1;
                break;
            }
        }

        if(idx1 == -1) {
            reverse(nums, 0);
            return;
        }

        for(int i = nums.length - 1; i > idx1; i--) {
            if(nums[i] > nums[idx1]) {
                idx2 = i;
                break;
            }
        }

        swap(nums, idx1, idx2);
        reverse(nums, idx1 + 1);
    }

    void swap(int[] nums, int a, int b) {
        int temp = nums[a];
        nums[a] = nums[b];
        nums[b] = temp;
    }

    void reverse(int[] nums, int start) {
        int i = start;
        int j = nums.length - 1;
        while(i < j) {
            swap(nums, i, j);
            i++;
            j--;
        }
    }
}

