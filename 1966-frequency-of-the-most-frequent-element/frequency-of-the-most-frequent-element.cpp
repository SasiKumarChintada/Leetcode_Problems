class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int maxL=INT_MIN;
        long long sum=0;
        int l=0;
        for(int r=0;r<n;r++){
            sum+=nums[r];
            while((long long)nums[r]*(r-l+1) > sum+k){
                sum-=nums[l];
                l++;
            }
            maxL=max(maxL,r-l+1);
        }
        return maxL;
    }
};