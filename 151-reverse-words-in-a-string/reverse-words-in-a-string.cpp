class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string>res;
        while(ss>>word){
            res.push_back(word);
        }
        reverse(res.begin(),res.end());
        string final;
        for(int i=0;i<res.size();i++){
            if(!final.empty()) final+=" ";
            final+=res[i];
        }
        return final;
    }
};