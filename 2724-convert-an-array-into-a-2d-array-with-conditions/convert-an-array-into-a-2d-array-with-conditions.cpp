class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> freq;
        for (int x : nums) {
            freq[x]++;
        }
        int maxi = -1;
        for (auto& p : freq) {
            maxi = max(maxi, p.second);
        }
        vector<vector<int>> twod;
        for (int i = 0; i < maxi; i++) {
             vector<int> oned;
            for (auto& p : freq) {
                if (p.second > 0) {
                    oned.push_back(p.first);
                    p.second--;
                    if(p.second<0) freq.erase(p.first);
                }
            }
            twod.push_back(oned);
        }
        return twod;
    }
};