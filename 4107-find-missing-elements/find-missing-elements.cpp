class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mini=*min_element(nums.begin(),nums.end());
        int maxii=*max_element(nums.begin(),nums.end());
        vector<int>res;
        for(int i=mini+1;i<maxii;i++){
            int cnt=count(nums.begin(),nums.end(),i);
            if(cnt!=1) res.push_back(i);
        }
        return res;
    }
};