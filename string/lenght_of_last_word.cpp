class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int n = s.size();
        // cout<<n<<endl;
        int l = 0;
        int j = n - 1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (j >= 0 && s[i] == ' ')
            {
                j--;
            }
            else
            {
                break;
            }
        }

        // cout<<j;
        while (j >= 0 && s[j] != ' ')
        {
            l++;
            j--;
        }
        return l;
    }
};
