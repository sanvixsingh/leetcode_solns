class Solution
{
public:
    bool isPalindrome(string s)
    {
        int i = 0;
        int j = s.size() - 1;
        while (j > i)
        {
            while (i < j && (!isalnum(s[i]) || isspace(s[i]) || ispunct(s[i])))
            {
                i++;
            }
            while (j > i && (!isalnum(s[j]) || isspace(s[j]) || ispunct(s[j])))
            {
                j--;
            }
            if (isupper(s[i]))
            {
                s[i] = tolower(s[i]);
            }
            if (isupper(s[j]))
            {
                s[j] = tolower(s[j]);
            }
            // cout<<"i="<<i<<endl;
            // cout<<"j="<<j<<endl;
            if (s[i] == s[j])
            {
                i++;
                j--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};
