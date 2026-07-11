class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string>res;
        vector<pair<int,string>>p(names.size());
        for(int i=0;i<names.size();i++){
            p[i].first=heights[i];
            p[i].second=names[i];
        }
        sort(p.rbegin(),p.rend());
        for(auto &s:p){
            res.push_back(s.second);
        }
           return res;
    }
};