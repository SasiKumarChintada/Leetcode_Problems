class Solution {
public:
    void recursion(int sum,int curr_indx,vector<int>&ds,vector<vector<int>>&res,vector<int>&nums,int n,int target){
        if(sum==target){
            res.push_back(ds);
            return;
        }
        if(curr_indx==n || sum>target) return;
        ds.push_back(nums[curr_indx]); 
        sum+=nums[curr_indx];
        recursion(sum,curr_indx,ds,res,nums,n,target);
        ds.pop_back();
        sum-=nums[curr_indx];
        recursion(sum,curr_indx+1,ds,res,nums,n,target);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>ds;
        vector<vector<int>>res;
        int sum=0;
        recursion(sum,0,ds,res,nums,n,target);
        return res;
    }
};