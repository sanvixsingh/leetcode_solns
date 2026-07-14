class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = nums[0];
        
        int n = nums.size();
        if(n==1) return nums[0];
        int s=0;
        for(int i = 0; i<n; i++){
            s+=nums[i];
            // if(s<0) s=0;
            if(s>maxsum) maxsum = s;
            if(s<0) s=0;
        }
        return maxsum;
    }
};