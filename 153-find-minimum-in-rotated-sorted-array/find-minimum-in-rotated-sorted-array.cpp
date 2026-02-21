class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0,high=n-1;
        int mini=nums[low];
        while(low<=high){
            int mid=low+(high-low)/2;
            // if large
            if(nums[mid]>=mini){
                low=mid+1;
            }
            //if small
            else{
                mini=nums[mid];
                high=mid-1;
            }
            
        }
        return mini;
    }
};