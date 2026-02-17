class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string>res;
        for(int i=0;i<words.size();i++){
            stringstream ss(words[i]);
            string word;
            while(getline(ss,word,separator)){
                if(word=="") continue;
                res.push_back(word);
            }
        }
          return res;
    }
};