class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int mini_score = min(nums[n-1]-nums[2],nums[n-3]-nums[0]);
        return min(mini_score,nums[n-2]-nums[1]);
    }
};