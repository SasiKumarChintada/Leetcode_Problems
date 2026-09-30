class Solution {
public:
    void recursion(vector<bool>&visited,vector<int>&ds,vector<vector<int>>&res,vector<int>&nums,int n){
        if(ds.size()==n){
            res.push_back(ds);
            return;
        }
        for(int i=0;i<n;i++){
            if(visited[i]==false){
                ds.push_back(nums[i]);
                visited[i]=true;
                recursion(visited,ds,res,nums,n);
                ds.pop_back();
                visited[i]=false;
            }
        }  
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<int>ds;
        vector<vector<int>>res;
        vector<bool>visited(n,false);
        recursion(visited,ds,res,nums,n);
        return res;
    }
};