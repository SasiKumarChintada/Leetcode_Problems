class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i+=2){
            swap(nums[i],nums[i+1]);
        }
        vector<int>arr(nums.size());
        copy(nums.begin(),nums.end(),arr.begin());
        return arr;
    }
};