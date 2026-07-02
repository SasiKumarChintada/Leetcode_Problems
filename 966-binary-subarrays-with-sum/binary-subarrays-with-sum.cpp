class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0;
        int cnt1=0;
        int sum1=0;
        // atmost k subarrays
        for(int r=0;r<n;r++){
            sum1+=nums[r];
            while(sum1>k){
                sum1-=nums[l];
                l++;
            }
            cnt1+=r-l+1;
        }
        // atmost k-1 subarrays
        int i=0;
        int cnt2=0;
        int sum2=0;
        for(int j=0;j<n;j++){ 
            sum2+=nums[j];
            if(k-1<0) break;
            while(sum2>k-1){
                sum2-=nums[i];
                i++;
            }
                cnt2+=j-i+1;
        }
        return cnt1-cnt2;
    }
};