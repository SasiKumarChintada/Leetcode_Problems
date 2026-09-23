class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        // minimum subarray whose sum == total_sum - x;
        int n=nums.size();
        long long total_sum = accumulate(nums.begin(),nums.end(),0LL);
        long long find_sum = total_sum-x;
        if(find_sum<0) return -1;
        int l=0;
        long long sum=0;
        int max_len=INT_MIN;
        for(int r=0;r<n;r++){
            sum+=nums[r];
            while(sum>find_sum){
                sum-=nums[l];
                l++;
            }
            if(sum==find_sum){
                max_len=max(max_len,r-l+1);
                cout<<max_len<<" ";
            }
        }
        return max_len==INT_MIN ? -1 : n-max_len;
    }
};