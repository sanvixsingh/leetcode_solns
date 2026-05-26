class Solution
{
public:
    int sqr(int n)
    {
        int s = 0;
        int r;
        while (n != 0)
        {
            r = n % 10;
            s += (r * r);
            n = n / 10;
        }
        return s;
    }
    bool isHappy(int n)
    {
        int s, f;
        s = f = n;
        do
        {
            s = sqr(s);
            f = sqr(f);
            f = sqr(f);
        } while (s != f);
        if (s == 1)
            return true;
        else
            return false;
    }
};