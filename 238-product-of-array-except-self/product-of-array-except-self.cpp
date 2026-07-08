class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n),pre(n),suff(n);
        pre[0]=nums[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]*nums[i];
        }
        suff[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suff[i]=suff[i+1]*nums[i];
        }
        ans[0]=suff[1];
        ans[n-1]=pre[n-2];
        for(int i=1;i<n-1;i++){
                ans[i]=pre[i-1]*suff[i+1];
        }
        return ans;
    }
};