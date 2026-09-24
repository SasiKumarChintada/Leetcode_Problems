class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int times=n/3;
        unordered_map<int,int>freq;
        for(int x : nums) freq[x]++;
        vector<int>res;
        for(auto &p : freq){
            if(p.second>times) res.push_back(p.first);
        }
        return res;
    }
};