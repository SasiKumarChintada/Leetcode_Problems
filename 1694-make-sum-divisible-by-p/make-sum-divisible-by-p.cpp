class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n=nums.size();
        vector<long long>pre(n);
        long long sum=accumulate(nums.begin(),nums.end(),0LL);
        pre[0]=nums[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+nums[i];
        }
        int target=sum%p;
        if(target==0) return 0;
        unordered_map<int,int>mp;
        int minL=INT_MAX;
        mp[0]=-1;
        for(int j=0;j<n;j++){
            int rem=pre[j]%p;
            int val=(pre[j]-target+p)%p;
            if(mp.count(val)){
                minL=min(minL,j-mp[val]);
            }
            mp[rem]=j;
        }
        return (minL==n) ? -1 : minL;
    }
};