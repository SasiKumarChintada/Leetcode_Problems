class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& nums, int k) {
        int n=nums.size();
        vector<int>uam(k,0);
        unordered_map<int,set<int>>freq;
        for(int i=0;i<n;i++){
            freq[nums[i][0]].insert(nums[i][1]); 
        }
        vector<int>s;
        for(auto &p: freq){
            s.push_back(p.second.size()); 
        }
        unordered_map<int,int>mp;
        for(int x:s){
            mp[x]++;
        }
        for(auto &p:mp){
            uam[p.first-1]=p.second;
        }
        for(int x:s) cout<<x<<" ";
        return uam;
    }
};