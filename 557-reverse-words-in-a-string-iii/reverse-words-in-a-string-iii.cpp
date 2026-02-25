class Solution {
public:
    string reverseWords(string s) {
        int k=s.size();
        stringstream ss(s);
        string word;
        string res;
        while(ss>>word){
            int n=word.size();
            for(int i=n-1;i>=0;i--){
                res+=word[i];
            }
            res+=" ";
        }
        return res.substr(0,k);
    }
};