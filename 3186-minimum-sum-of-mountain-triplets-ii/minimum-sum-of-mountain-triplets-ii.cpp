class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>pre(n);
        pre[0]=nums[0];
        for(int i=1;i<n;i++){
            pre[i]=min(pre[i-1],nums[i]);
        }
        vector<int>suff(n);
        suff[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suff[i]=min(suff[i+1],nums[i]);
        }
        int min_sum=INT_MAX;
        for(int i=1;i<n-1;i++){
            if(pre[i-1]<nums[i] && nums[i]>suff[i+1]){
                min_sum=min(min_sum,pre[i-1]+nums[i]+suff[i+1]);
            }
        }
        return (min_sum!=INT_MAX) ? min_sum : -1;
    }
};