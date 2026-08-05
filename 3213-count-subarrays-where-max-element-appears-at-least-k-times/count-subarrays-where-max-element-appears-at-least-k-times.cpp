class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int maxi=*max_element(nums.begin(),nums.end());
        int l=0;
        int cnt=0;
        long long ans=0;
        for(int r=0;r<n;r++){
            if(nums[r]==maxi) cnt++;
            while(cnt>=k){
                ans+=(n-r);
                if(nums[l]==maxi) cnt--;
                l++;
            }
        }
        return ans;
    }
};