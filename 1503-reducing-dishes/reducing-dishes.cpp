class Solution {
public:
    int maxSatisfaction(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int maxi=0;
        for(int i=0;i<n;i++){
            int sum=0;
            int k=1;
            for(int j=i;j<n;j++){
                sum+=nums[j]*(k);
                maxi=max(sum,maxi);
                k++;
            }
        }
        return maxi;
    }
};