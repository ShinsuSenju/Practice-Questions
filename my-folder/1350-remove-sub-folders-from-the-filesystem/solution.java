class Solution {
    public List<String> removeSubfolders(String[] folder) {
        Arrays.sort(folder);
        List<String> ans = new ArrayList<>();
        
        String prev = ""; 
        for (String s : folder) {
            if (ans.isEmpty() || !s.startsWith(prev + "/")) {
                ans.add(s);
                prev = s;
            }
        }
        
        return ans;
    }
}

