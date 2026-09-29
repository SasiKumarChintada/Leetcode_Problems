class Solution {
public:
    void recursion(int indx,vector<int>&nums,int size,vector<int>&ds,vector<vector<int>>&res){
        if(ds.size()==size){
            res.push_back(ds);
            return;
        }
        if(indx>=nums.size()) return;
        ds.push_back(nums[indx]);
        recursion(indx+1,nums,size,ds,res);
        ds.pop_back();
        recursion(indx+1,nums,size,ds,res);
    }
    vector<vector<int>> combine(int n, int size) {
        vector<int>nums;
        for(int i=1;i<=n;i++) nums.push_back(i);
        vector<int>ds;
        vector<vector<int>>res;
        recursion(0,nums,size,ds,res);
        return res;
    }   
};