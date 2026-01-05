class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>left(nums.size(),0);
        for(int i=1;i<nums.size();i++){
            left[i]=left[i-1]+nums[i-1];
        }
        vector<int>right(nums.size(),0);
        for(int i=nums.size()-2;i>=0;i--){
            right[i]=right[i+1]+nums[i+1];
        }
        vector<int>res(nums.size());
        for(int i=0;i<nums.size();i++){
            res[i]=abs(left[i]-right[i]);
        }
        return res;
    }
};