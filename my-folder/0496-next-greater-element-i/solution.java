class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
        Stack<Integer> tempStack = new Stack<>();
        Map<Integer,Integer> greaterMap = new HashMap<>();
        for(int i=nums2.length-1;i>=0;i--){
            while(!tempStack.isEmpty() && nums2[i]>=tempStack.peek()) tempStack.pop();
            if(tempStack.isEmpty()) greaterMap.put(nums2[i],-1);
            else greaterMap.put(nums2[i],tempStack.peek());
            tempStack.push(nums2[i]);
        }
        int[] ans = new int[nums1.length];
        for(int i=0;i<nums1.length;i++){
            ans[i]=greaterMap.get(nums1[i]);
        }
        return ans;
    }
}
