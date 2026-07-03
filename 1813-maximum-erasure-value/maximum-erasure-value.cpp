class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int l=0;
        long long max_sum=INT_MIN;
        long long sum=0;
        for(int r=0;r<n;r++){
            mp[nums[r]]++;
            while(mp[nums[r]]>1){
                mp[nums[l]]--;
                sum-=nums[l];
                l++;
            }
             sum+=nums[r];
             max_sum=max(max_sum,sum);
            }
        return max_sum;
    }
};