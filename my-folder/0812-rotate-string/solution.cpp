class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        string temp = goal+goal;
        bool isFound = temp.find(s) != string::npos;
        return isFound;
    }
};
