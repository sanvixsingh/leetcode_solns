class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        long long sum = 0;
        int n = x;
        while (n != 0)
        {

            sum = sum * 10 + n % 10;
            n = n / 10;
        }
        return sum == x;
    }
};