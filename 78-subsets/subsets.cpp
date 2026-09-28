class Solution {
public:
    void Generate(int curr_indx,vector<int>&nums,int n, vector<int>&ds,vector<vector<int>>&res){
        if(curr_indx==n){
            res.push_back(ds);
            return;
        }
        ds.push_back(nums[curr_indx]);   
        Generate(curr_indx+1,nums,n,ds,res);
        ds.pop_back();
        Generate(curr_indx+1,nums,n,ds,res);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size(); 
        vector<vector<int>>res;
        vector<int>ds;
        Generate(0,nums,n,ds,res);  
        return res;
    }
};