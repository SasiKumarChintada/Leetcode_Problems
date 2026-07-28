class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        long long sum=accumulate(nums.begin(),nums.end(),0LL);
        long long target=sum-x;
        if(target<0) return -1;
        int l=0;
        int maxL=INT_MIN;
        long long sum1=0;
        for(int r=0;r<n;r++){
            sum1+=nums[r];
            while(sum1>target){
                sum1-=(long long)nums[l];
                l++;
            }
            if(sum1==target){
                maxL=max(maxL,r-l+1);
            }
        }
        return maxL==INT_MIN ? -1 : n-maxL;
    }
};