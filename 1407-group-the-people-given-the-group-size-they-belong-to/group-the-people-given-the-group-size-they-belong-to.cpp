class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& gs) {
        vector<vector<int>>res;
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<gs.size();i++){
            mp[gs[i]].push_back(i);
        }
        for(auto &p:mp){
            vector<int>part;
            for(int i=0;i<p.second.size();i++){
                part.push_back(p.second[i]);
                if(part.size()==p.first){
                    res.push_back(part);
                    part.clear();
                } 
            }
            if(part.size()>0) res.push_back(part);
        }
        return res;
    }
};