class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>pre(n);
        pre[0]=nums[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+nums[i];
        }
        unordered_map<int,int>mp;
        mp[0]=-1;
        for(int j=0;j<n;j++){
            int rem=pre[j]%k;
            if(mp.count(rem)){
                if(j-mp[rem]>=2) return true;
            }
            else mp[rem]=j;
        }
        return false;
    }
};