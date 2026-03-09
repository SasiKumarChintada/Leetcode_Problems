class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>res;
        unordered_map<int,int>freq;
        for(int x: nums){
            freq[x]++;
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=(i+1)){
                if(freq.find(i+1)==freq.end()) res.push_back(i+1);
            }
        }
        return res;
    }
};