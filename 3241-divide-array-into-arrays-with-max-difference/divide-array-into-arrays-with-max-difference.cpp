class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        bool yes=true;
        vector<vector<int>>res,emp;
        for(int i=0;i<n;i+=3){
            if(nums[i+2]-nums[i]<=k){
                res.push_back({nums[i],nums[i+1],nums[i+2]});
            }
            else{
                yes=false;
                break;
            }
        }
        return (yes==false) ? emp : res;
    }
};