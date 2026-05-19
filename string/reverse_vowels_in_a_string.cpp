class Solution
{
public:
    bool isvowel(char i)
    {
        if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' ||
            i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U')
        {
            return true;
        }
        return false;
    }
    string reverseVowels(string s)
    {
        int n = s.size();
        int i = 0, j = n - 1;

        while (i < j)
        {
            if (!isvowel(s[i]))
            {
                i++;
                continue;
            }
            if (!isvowel(s[j]))
            {
                j--;
                continue;
            }
            if (isvowel(s[i]) && isvowel(s[j]))
            {

                // char temp = s[i];
                // s[i] = s[j];
                // s[j] = temp;
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }

        return s;
    }
};