class Solution {
    public boolean isValid(String s) {
        Stack<Character> parStack = new Stack<>();
        
        for (char c : s.toCharArray()) {
            if (c == '(' || c == '{' || c == '[') {
                parStack.push(c);
            } else {
                if (parStack.isEmpty()) return false;

                char top = parStack.pop();
                if ((c == ')' && top != '(') || 
                    (c == '}' && top != '{') || 
                    (c == ']' && top != '[')) {
                    return false;
                }
            }
        }
        return parStack.isEmpty();
    }
}

