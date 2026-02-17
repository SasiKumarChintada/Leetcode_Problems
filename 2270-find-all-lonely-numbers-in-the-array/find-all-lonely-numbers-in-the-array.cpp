class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int x:nums){
            freq[x]++;
        }
        vector<int>res;
        for(int x:nums){
            if(freq[x]==1 && freq.find(x-1)==freq.end() && freq.find(x+1)==freq.end()){
                res.push_back(x);
            }
        }
        return res;
    }
};