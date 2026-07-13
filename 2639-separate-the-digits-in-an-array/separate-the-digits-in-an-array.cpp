class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>res,dup;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            while(nums[i]>0){
                res.push_back(nums[i]%10);
                nums[i]/=10;
            }
            reverse(res.begin(),res.end());
            for(int i=0;i<res.size();i++){
                ans.push_back(res[i]);
            }
            res=dup;
        }
        return ans;
    }
};