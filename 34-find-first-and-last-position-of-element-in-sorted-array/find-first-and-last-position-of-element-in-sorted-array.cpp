class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,high=n-1;
        int minInd=INT_MAX,maxInd=INT_MIN;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                minInd=min(minInd,mid);
                high=mid-1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else low=mid+1;
        }
        low=0,high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                maxInd=max(maxInd,mid);
                low=mid+1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else low=mid+1;
        }
        if(minInd==INT_MAX && maxInd==INT_MIN) {
            minInd=-1;
            maxInd=-1;
        }
        return {minInd,maxInd};
    }
};