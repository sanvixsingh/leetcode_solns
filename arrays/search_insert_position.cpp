class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int pos = 0;
        for (int i : nums)
        {
            if (i == target)
            {

                return pos;
            }
            else if (target > i)
            {
                pos++;
            }
            else
            {
                break;
            }
        }
        return pos;
    }
};
