class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>frequency;
        vector<int>s;
        for(int x:arr) frequency[x]++;
        for(const auto &[num,freq] : frequency){
            s.push_back(freq);
        }
        int size=s.size();
        set<int>ss;
        for(int x:s) ss.insert(x);
        return (size==ss.size());

    }
};