class Solution {
public:
    int similarPairs(vector<string>& words) {
        int cnt=0;
        vector<string>result;
        for(auto &word : words){
            set<char>s(word.begin(),word.end());
            string full;
            for(char c:s) full+=c;
            result.push_back(full);
        }
        for(int i=0;i<result.size()-1;i++){
            for(int j=i+1;j<result.size();j++){
                    if(result[i]==result[j]) cnt++;
                }
            }
        return cnt;
    }
};