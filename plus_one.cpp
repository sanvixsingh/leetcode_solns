class Solution
{
public:
    vector<int> plusOne(vector<int> &n)
    {
        int num = n.size();
        for (int i = num - 1; i >= 0; i--)
        {
            if (i == num - 1)
            {
                n[i]++;
            }
            if (n[i] == 10)
            {
                if (i != 0)
                {
                    n[i - 1]++;
                    n[i] = 0;
                }
                else
                {
                    n.push_back(0);
                    n[i] = 1;
                }
            }
        }
        return n;
    }
};