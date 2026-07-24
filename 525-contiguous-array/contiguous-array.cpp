class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0) nums[i]=-1;
        }
        vector<int>pre(n);
        pre[0]=nums[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+nums[i];
        }
        unordered_map<int,int>mp;
        mp[0]=-1;
        int maxL=0;
        for(int j=0;j<n;j++){
            if(mp.count(pre[j])){
                maxL=max(maxL,j-mp[pre[j]]);
                //mp[pre[j]]=j;
            }
            else mp[pre[j]]=j;
        }
        return maxL;
    }
};