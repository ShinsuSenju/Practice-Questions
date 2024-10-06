class Solution {
    void getList(int[] candidates,int target, List<List<Integer>> ans,List<Integer> temp,int ind){
        if(target==0){
            ans.add(new ArrayList<>(temp));
            return;
        }
        for(int i = ind;i<candidates.length;i++){
            if(i>ind && candidates[i]==candidates[i-1]) continue;
            if(candidates[i]>target) break;
            temp.add(candidates[i]);
            getList(candidates,target-candidates[i],ans,temp,i+1);
            temp.remove(temp.size()-1);

        }
        
    }
    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        Arrays.sort(candidates);
        int n = candidates.length;
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> temp = new ArrayList<>();
        getList(candidates,target,ans,temp,0);
        return ans;
        
    }
}
