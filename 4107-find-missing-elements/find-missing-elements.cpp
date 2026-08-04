class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        vector<int>res;
        for(int x:nums){
            if(x>maxi){
                maxi=x;
            }
            if(x<mini){
                mini=x;
            }
        }
        for(int i=mini;i<=maxi;i++){
            auto it = find(nums.begin(),nums.end(),i);
            if(it==nums.end()){
                res.push_back(i);
            }
        }
        return res;
    }
};