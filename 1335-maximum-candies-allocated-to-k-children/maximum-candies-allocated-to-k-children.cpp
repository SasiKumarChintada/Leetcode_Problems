class Solution {
public:
    bool possible(vector<int>& nums, int mid, long long k){
        int n=nums.size();
        long long cnt=0;
        for(int i=0;i<n;i++){
            cnt+=nums[i]/mid;
            if(cnt>=k) break;
        }
        return (cnt>=k) ? true : false;
    }
    int maximumCandies(vector<int>& nums, long long k) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(nums,mid,k)){
                low=mid+1;
            }
            else high=mid-1;
        }
        return high;
    }
};