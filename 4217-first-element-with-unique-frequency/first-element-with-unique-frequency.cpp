class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        unordered_map<int,int>count;
        for(auto &p:freq){
            count[p.second]++;
        }
        for(int x:nums){
            if(count[freq[x]]==1) return x;
        }
        return -1;
    }
};