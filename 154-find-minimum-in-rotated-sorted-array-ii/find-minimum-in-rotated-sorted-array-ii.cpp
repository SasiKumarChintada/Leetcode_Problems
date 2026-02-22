class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0,high=n-1;
        int mini=nums[0];
        while(low<=high){
            int mid=low+(high-low)/2;
            mini=min(mini,nums[mid]);
            if(nums[low]==nums[mid] && nums[mid]==nums[high]){
                low++;
                high--;
            }
            else if(nums[mid]>nums[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return mini;
    }
};