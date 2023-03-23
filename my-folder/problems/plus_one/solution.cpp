class Solution {
public:
 vector<int> plusOne(vector<int> &digits)
    {
            int carry = 1;
        int n = digits.size();
        for (int i = n - 1; i >= 0; i--)
        {
            if (carry == 1)
            {
                digits[i]++;
                carry = 0;
            }
            if (digits[i] == 10)
            {
                carry = 1;
                digits[i] = 0;
            }
        }
        if (digits[0] == 0)
        {
            digits[0] = 1;
            digits.push_back(0);
        }
        return digits;
            
    }
};