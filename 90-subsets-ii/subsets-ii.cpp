class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        set<vector<int>>res;
        for(int mask=0;mask<(1<<n);mask++){
            vector<int>subset;
            for(int i=0;i<n;i++){
                if(mask & (1<<i)){
                     subset.push_back(nums[i]); 
                }
            }
            res.insert(subset);
        }
        vector<vector<int>>ans(res.begin(),res.end());  
        return ans; 
    }
};