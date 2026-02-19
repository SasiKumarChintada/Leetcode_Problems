class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int n=nums.size();
        int sum=0,k=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                sum+=__builtin_popcount(nums[i]^nums[j]);
            }
        }
            return sum;
    }
};