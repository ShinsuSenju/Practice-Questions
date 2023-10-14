class Solution {
public:
    vector<int> lastVisitedIntegers(vector<string>& words) {
        vector<int> ans;
        vector<int> nums;
        int k = 0;

        for (const string& word : words) {
            if (word == "prev") {
                k++;
                if (k <= nums.size()) {
                    int lastVisited = nums[nums.size() - k];
                    ans.push_back(lastVisited);
                } else {
                    ans.push_back(-1);
                }
            } else {
                int num = stoi(word);
                nums.push_back(num);
                k = 0;
            }
        }

        return ans;
    }
};
