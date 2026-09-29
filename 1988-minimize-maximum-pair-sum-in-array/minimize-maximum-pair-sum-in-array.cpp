class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0,j=n-1;
        int maxi=INT_MIN;
        while(i<j){
            maxi=max(nums[i]+nums[j],maxi);
            i++;
            j--;
        }
        return maxi;
    }
};