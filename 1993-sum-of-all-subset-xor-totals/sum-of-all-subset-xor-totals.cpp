class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size();
        int total_sum=0;
        for(int mask=0;mask<(1<<n);mask++){
            int sum=0;
            for(int i=0;i<n;i++){
                if(mask & (1<<i)){
                    sum=sum^nums[i];
                }
            }
            total_sum+=sum;
        }
        return total_sum;
    }
};