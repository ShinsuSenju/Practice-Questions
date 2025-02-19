class Solution {
public:
    bool backtrack(int n, int k, int& count, string& ans, string temp) {
        if (temp.length() == n) { 
            count++;
            if (count == k) {
                ans = temp; 
                return true; 
            }
            return false;
        }
        for (char x = 'a'; x <= 'c'; x++) {
            if (!temp.empty() && temp.back() == x) continue; 
            if (backtrack(n, k, count, ans, temp + x)) return true;
        }
        return false;
    }
    
    string getHappyString(int n, int k) {
        string ans = "";
        int count = 0;
        backtrack(n, k, count, ans, "");
        return ans;
    }
};

