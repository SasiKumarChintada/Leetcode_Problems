class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        sort(allowed.begin(),allowed.end());
        int cnt=0;
        for(auto &word : words){
            set<char>s(word.begin(),word.end());
            string full;
            for(char x:s) full+=x;
            if(full.find_first_not_of(allowed)==string::npos) cnt++;
        }
        return cnt;
    }
};