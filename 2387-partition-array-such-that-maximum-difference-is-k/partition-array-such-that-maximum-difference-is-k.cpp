class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int r=0,l=0;
        int op=0;
        while(r<n && l<n){
            if((nums[l]-nums[r])>k){
                op++;
                r=l;
            }
            l++;
        } 
        return op+1;
    }
};