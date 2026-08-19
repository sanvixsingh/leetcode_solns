class Solution {
public:
    // bool cmp(pair<char, int> &a, pair<char, int> &b){
    //     return a.second>b.second;
    // }
    string frequencySort(string s) {
        unordered_map<char, int> m;
        for(char i:s){
            m[i]++;
        }
        vector<pair<char, int>> v(m.begin(), m.end());
        sort(v.begin(), v.end(), [](pair<char, int> &a, pair<char, int> &b){
            return a.second>b.second;
        });
        string ans="";
        for(auto[ch, freq]: v){
            for(int i = 0; i<freq; i++){
                ans+=ch;
            }
        }
        return ans;
    }
};