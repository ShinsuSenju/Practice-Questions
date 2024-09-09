class Solution {
    public String frequencySort(String s) {
        Map<Character, Integer> mp = new HashMap<>();
        for (char c : s.toCharArray()) {
            mp.put(c, mp.getOrDefault(c, 0) + 1);
        }
        List<Pair<Integer, Character>> list = new ArrayList<>();
        for (Map.Entry<Character, Integer> entry : mp.entrySet()) {
            char k = entry.getKey();
            int v = entry.getValue();
            list.add(new Pair<>(v, k));
        }
         list.sort(new Comparator<Pair<Integer, Character>>() {
            @Override
            public int compare(Pair<Integer, Character> a, Pair<Integer, Character> b) {
                return b.getKey() - a.getKey(); 
            }
        });
        StringBuilder ans = new StringBuilder();
        for (Pair<Integer, Character> p : list) {
            int count = p.getKey();
            while (count-- > 0) {
                ans.append(p.getValue());
            }
        }

        return ans.toString();
    }

}

