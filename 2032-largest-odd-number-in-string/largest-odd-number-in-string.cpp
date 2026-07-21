class Solution {
public:
    string largestOddNumber(string nums) {
        
        while(nums.size()!= 0){
            int n = nums.size();
            int i = nums[n-1] - '0';
            if(i %2==1){
                return nums;
            }
            else{
                nums.erase(n-1, 1);
            }
        }
        return "";
    }
};