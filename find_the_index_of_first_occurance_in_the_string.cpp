class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        for (int i = 0; i < haystack.size(); i++)
        {
            if (haystack[i] == needle[0])
            {
                for (int j = 0; j < needle.size(); j++)
                {
                    if (needle[j] != haystack[i + j])
                        break;
                    // else continue;
                    if (j == (needle.size() - 1))
                        return i;
                }
            }
        }
        return -1;
    }
};