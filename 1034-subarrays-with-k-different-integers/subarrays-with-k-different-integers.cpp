class Solution {
public:
    int Atmost(vector<int>& nums,int k){
        int n=nums.size();
        int l=0;
        int cnt=0;
        unordered_map<int,int>mp;
        for(int r=0;r<n;r++){
            mp[nums[r]]++;
            while(mp.size()>k){
                mp[nums[l]]--;
                if(mp[nums[l]]<=0) mp.erase(nums[l]);
                l++;
            }
            cnt+=(r-l+1);
        }
        return cnt;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return Atmost(nums,k)-Atmost(nums,k-1);
    }
};