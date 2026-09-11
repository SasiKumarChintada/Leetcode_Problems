class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int>freq;
        set<int>res;
        for(char x:s) freq[x]++;
        for(auto &p:freq){
            res.insert(p.second);
        }
        return (res.size()==1) ? true : false;
    }
};