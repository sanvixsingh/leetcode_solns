class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> mpp = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

        int num = 0;
        int i = s.size() - 1;

        while (i >= 0)
        {
            int curr = mpp[s[i]];
            if (i > 0)
            {
                int prev = mpp[s[i - 1]];
                if (curr > prev)
                {
                    num = num + curr - prev;
                    i -= 2;
                    continue;
                }
            }
            num += curr;
            i--;
        }
        return num;
    }
};