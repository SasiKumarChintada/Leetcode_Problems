class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        int n=nums.size();
        int m=nums[0].size();
        int low=0,high=m-1;
        while(low<n && high>=0){
            if(nums[low][high]==target) return true;
            if(nums[low][high]>target){
                high--;
            }
            else{
                low++;
            }
        }
        return false;
    }
};