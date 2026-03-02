class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int cnt=0;
        stringstream ss(text);
        string word;
        while(ss>>word){
            int n=word.size();
            if(word.find_first_of(brokenLetters)==string::npos) cnt++; 
        }
        return cnt;
    }
};