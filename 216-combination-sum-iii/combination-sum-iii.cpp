class Solution {
public: 
    void recursion(int indx,int sum,vector<int>&ds,vector<vector<int>>&res,int k,int target,vector<int>&nums){
        if(ds.size()==k){
            if(sum==target) res.push_back(ds);
            return;
        }
        if(indx>=nums.size() || sum>target) return;
        ds.push_back(nums[indx]);
        sum+=nums[indx];
        recursion(indx+1,sum,ds,res,k,target,nums); 
        ds.pop_back();
        sum-=nums[indx];
        recursion(indx+1,sum,ds,res,k,target,nums);
    }
    vector<vector<int>> combinationSum3(int k, int target) {
        vector<int>nums;
        for(int i=1;i<=9;i++) nums.push_back(i);
        vector<int>ds;
        vector<vector<int>>res;
        int sum=0;
        recursion(0,sum,ds,res,k,target,nums);
        return res;
    }
};