class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        long long numsum = accumulate(nums.begin(),nums.end(),0);
        long long sum= (n*(n+1))/2;
        return (int)sum-numsum;

    }
};