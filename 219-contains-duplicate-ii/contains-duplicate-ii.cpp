class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,vector<int>>freq;
        for(int i=0;i<n;i++){
            freq[nums[i]].push_back(i);
        }
        for(auto &p:freq){
        int m=p.second.size();
        for(int i=1;i<m;i++){
            if((p.second[i]-p.second[i-1])<=k){
                return true;
            }
        }
        }
        return false;
    }
};