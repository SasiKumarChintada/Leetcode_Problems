class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(auto &p: freq){
            if(p.second==1) return p.first;
        }
        return 0;
    }
};