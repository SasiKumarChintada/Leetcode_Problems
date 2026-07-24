class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>pre(n);
        pre[0]=nums[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+nums[i];
        }
        unordered_map<int,int>mp;
        mp[0]=1;
        int cnt=0;
        for(int j=0;j<n;j++){
            int rem=(pre[j]%k+k)%k;
            if(mp.count(rem)){
                cnt+=mp[rem];
            }
            mp[rem]++;
        }
        return cnt;
    }
};