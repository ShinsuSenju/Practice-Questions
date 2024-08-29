class Solution {
    public int[][] merge(int[][] intervals) {
        Arrays.sort(intervals, (a,b) -> Integer.compare(a[0],b[0]));
        List<int[]> merged = new ArrayList<>();
        for(int i = 0;i<intervals.length;i++){
            int  n = merged.size();
            if(merged.isEmpty() || merged.get(n-1)[1]<intervals[i][0]){
                merged.add(intervals[i]);
            }
            else merged.get(n-1)[1]= Math.max(merged.get(n-1)[1],intervals[i][1]);
        }
        return merged.toArray(new int[merged.size()][]);
        
    }
}
