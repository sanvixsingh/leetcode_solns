class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int i: nums){
            m[i]++;
        }
        vector<pair<int, int>> v(m.begin(), m.end());
        sort(v.begin(), v.end(), [](auto &a, auto &b){
            if(a.second==b.second){
                return a.first>b.first;
            }
            return a.second< b.second;
        });
        vector<int> ans;
        for(auto val:v){
            for(int i=0; i<val.second; i++){
                ans.push_back(val.first);
            }
        }
        return ans;
    }
};