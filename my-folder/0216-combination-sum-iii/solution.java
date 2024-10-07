class Solution {
    void getCombination(List<List<Integer>> ans,List<Integer> temp,int n,int k,int ind,int sum){
        if(temp.size()==k && sum==n){
            ans.add(new ArrayList<>(temp));
            return;
        }
        if( ind > 9 || temp.size()>k || sum>n) return;
        for(int i = ind;i<=9;i++){
            temp.add(i);
            getCombination(ans,temp,n,k,i+1,sum+i);
            temp.remove(temp.size()-1);
        }

    }
    public List<List<Integer>> combinationSum3(int k, int n) {
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> temp = new ArrayList<>();
        getCombination(ans,temp,n,k,1,0);
        return ans;
        
    }
}
