class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0;
        int ans_xor=0;
        while(i<n-1){
            if(nums[i]==nums[i+1]){
                ans_xor^=nums[i];
                i+=2;
            }
            else i++;
        }
        return ans_xor;
    }
};