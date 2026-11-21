class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int maxi=*max_element(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            ans+=(maxi-nums[i]);
        }
        return ans;
    }
};