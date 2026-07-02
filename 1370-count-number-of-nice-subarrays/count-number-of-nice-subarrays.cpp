class Solution {
public:
    int atmost(vector<int>&nums,int k){
        int n=nums.size();
        int l=0;
        int sum=0;
        int cnt=0;
        for(int r=0;r<n;r++){
            sum+=nums[r];
            while(sum>k){
                sum-=nums[l];
                l++;
            }
            cnt+=r-l+1;
        }
        return cnt;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>res;
        for(int i=0;i<n;i++){
            if(nums[i]%2!=0) res.push_back(1);
            else res.push_back(0);
        }
        return atmost(res,k)-atmost(res,k-1);
    }
};