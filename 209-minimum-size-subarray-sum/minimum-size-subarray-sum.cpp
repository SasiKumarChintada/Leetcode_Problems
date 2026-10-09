class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0,ans=INT_MAX;
        int l=0;
        for(int r=0;r<nums.size();r++){
            sum+=nums[r];
                while(sum >=target){
                    ans=min(ans,r-l+1);
                    sum-=nums[l];
                    l++;
                }
        }
        return (ans!=INT_MAX) ? ans : 0;
    }
};