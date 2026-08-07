class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        int n=bulbs.size();
        vector<int>res;
        unordered_map<int,int>freq;
        for(int x:bulbs){
            freq[x]++;
        }
        for(auto &p:freq){
            if(p.second%2!=0){
                res.push_back(p.first);
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};