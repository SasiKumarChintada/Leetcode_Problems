class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int low=1,high=n-1;
        if(n==2){
            if(nums[0]>nums[1]) return 0;
            else return 1;
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            if(mid==0 || mid==nums.size()-1) return mid;
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