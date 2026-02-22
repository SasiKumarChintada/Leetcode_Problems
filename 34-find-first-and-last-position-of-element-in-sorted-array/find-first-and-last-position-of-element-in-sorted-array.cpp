class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,high=n-1;
        int first=INT_MAX,last=INT_MIN;
        // finding the first element
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>target){
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                first=min(first,mid);
                high=mid-1;
            }
        }
        low=0,high=n-1;
        //finding the last element
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>target){
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                last=max(last,mid);
                low=mid+1;
            }
        }
        if(first==INT_MAX && last==INT_MIN) return {-1,-1};
        else return {first,last};
    }
};