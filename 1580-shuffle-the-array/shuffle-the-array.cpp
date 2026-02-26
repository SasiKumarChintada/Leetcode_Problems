class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int m=nums.size();
        vector<int>res(2*n,0);
        int i=0;
        while(2*i<m){
            res[2*i]=nums[i];
            res[2*i+1]=nums[i+n];
            i++;
        }
        return res;
    }
};