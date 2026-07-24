class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]%2==0) nums[i]=0;
            else nums[i]=1;
        } 
        vector<int>pre(n);
        if(nums[0]%2==0) pre[0]=0;
        else pre[0]=1;
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+nums[i];
        }
        unordered_map<int,int>mp;
        mp[0]=1;
        int cnt=0;
        for(int j=0;j<n;j++){
            int val=pre[j]-k;
            if(mp.count(val)){
                cnt+=mp[val];
            }
            mp[pre[j]]++;
        }
        return cnt;
    }
};