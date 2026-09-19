class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<vector<string>>res;
        unordered_map<string,vector<string>>mp;
        for(int i=0;i<n;i++){
            string org=strs[i];
            sort(strs[i].begin(),strs[i].end());
            mp[strs[i]].push_back(org);
        }
        for(auto &p:mp){
            vector<string>store;
            for(int i=0;i<p.second.size();i++){
                store.push_back(p.second[i]);
            }
            res.push_back(store);
        }
        return res;
    }
};