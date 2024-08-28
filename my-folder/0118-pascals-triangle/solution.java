class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> ans = new ArrayList<>();
        for(int i=1;i<=numRows;i++){
            List<Integer> row = new ArrayList<>();
            int res = 1;
            for(int j=1;j<=i;j++){
                row.add(res);
                res*=i-j;
                res/=j;
            }
            ans.add(row);

        }
        return ans;
        
    }
}
