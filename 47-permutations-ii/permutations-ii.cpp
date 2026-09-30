class Solution {
public: 
    void recursion(vector<bool>&visited,vector<int>&ds,set<vector<int>>&res,vector<int>&nums,int n){
        if(ds.size()==n){
            res.insert(ds);
            return;
        }
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1] && !visited[i-1]) continue;
            if(visited[i]==false){
                ds.push_back(nums[i]);
                visited[i]=true;
                recursion(visited,ds,res,nums,n);
                ds.pop_back();
                visited[i]=false;
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n=nums.size();
        vector<int>ds;
        vector<bool>visited(n,false);
        set<vector<int>>res;
        recursion(visited,ds,res,nums,n);
        vector<vector<int>>ans(res.begin(),res.end());
        return ans; 
    }
};