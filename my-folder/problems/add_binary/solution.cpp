class Solution
{
public:
    string addBinary(string A, string B)
{
 
    if (A.length() > B.length())
        return addBinary(B, A);
    int diff = B.length() - A.length();

    string zd;
    for (int i = 0; i < diff; i++)
        zd.push_back('0');

    A = zd + A;
    string res;
    char carry = '0';

    for (int i = A.length() - 1; i >= 0; i--)
    {
        if (A[i] == '1' && B[i] == '1')
        {
            if (carry == '1')
                res.push_back('1'), carry = '1';
            else
                res.push_back('0'), carry = '1';
        }
        else if (A[i] == '0' && B[i] == '0')
        {
            if (carry == '1')
                res.push_back('1'), carry = '0';
            else
                res.push_back('0'), carry = '0';
        }
   
        else if (A[i] != B[i])
        {
            if (carry == '1')
                res.push_back('0'), carry = '1';
            else
                res.push_back('1'), carry = '0';
        }
    }

    if (carry == '1')
        res.push_back(carry);
   
    reverse(res.begin(), res.end());

    int i = 0;
    while (i < res.length() - 1 && res[i] == '0')
        i++;
    return (res.substr(i));
}
};