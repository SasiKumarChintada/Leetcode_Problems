class Solution {
public:
    void generate(int curr_indx,int n, vector<int>&nums,vector<int>&ds,set<vector<int>>&res){
        if(curr_indx==n){
            res.insert(ds); 
            return ;
        }
        ds.push_back(nums[curr_indx]);
        generate(curr_indx+1,n,nums,ds,res);
        ds.pop_back();
        generate(curr_indx+1,n,nums,ds,res);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        vector<int>ds;  
        set<vector<int>>res;
        sort(nums.begin(),nums.end());
        generate(0,n,nums,ds,res);
        vector<vector<int>>ans(res.begin(),res.end());
        return ans;
    }
};