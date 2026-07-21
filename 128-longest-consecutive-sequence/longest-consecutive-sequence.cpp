class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for(int i : nums){
            s.insert(i);
        }
        
        int c = -1;
        int m = 0;
        for(int i: s){
            int l = 0;
            if(s.contains(i-1)==false){
                c = i;
                while(s.contains(c++)==true){
                    l++;
                    if(l>m)m = l;
                }
            }
        }
        return m;
    }
};