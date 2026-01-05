class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int start,end;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            start=max(0,i-nums[i]);
            for(int j=start;j<=i;j++){
                sum+=nums[j];
            }
        }
        return sum;
    }
};