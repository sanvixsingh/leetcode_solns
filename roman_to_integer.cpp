class Solution
{
public:
    int romanToInt(string s)
    {
        char symbols[7] = {'M', 'D', 'C', 'L', 'X', 'V', 'I'};
        int val[7] = {1000, 500, 100, 50, 10, 5, 1};
        int num = 0;
        for (int i = (s.length() - 1); i >= 0; i--)
        {
            //cout << i << endl;
            int x;
            for (int j = 0; j < 7; j++)
            {
                if (s[i] == symbols[j])
                {
                    x = j;
                }
            }
            //cout << "x=" << x << endl;
            num += val[x];
            //cout << "num=" << num << endl;
            if (i != 0)
            {
                int y;
                for (int j = 0; j < 7; j++)
                {
                    if (s[i - 1] == symbols[j])
                    {
                        y = j;
                    }
                }
                //cout << "y=" << y << endl;
                if (val[x] > val[y])
                {
                    num -= (2 * val[y]);
                }
                //cout << "num=" << num << endl;
            }
        }
        return num;
    }
};