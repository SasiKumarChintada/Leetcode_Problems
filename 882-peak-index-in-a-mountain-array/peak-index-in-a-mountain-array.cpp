class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int n=nums.size();
        int low=1,high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]) return mid;
            else if(nums[mid+1]>nums[mid]) {
                low=mid+1;
            }
            else if(nums[mid-1] >nums[mid]){
                high=mid-1;
            }
        }
        return 0;
    }
};