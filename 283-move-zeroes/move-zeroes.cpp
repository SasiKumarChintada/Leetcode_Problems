class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=1;
        while(j<n){
            if(nums[i]==0 && nums[j]!=0){
                swap(nums[i],nums[j]);
            }
            if(nums[i]==0 && nums[j]==0){
                j++;
                continue;
            }
            i++;
            j++;
        }
    }
};