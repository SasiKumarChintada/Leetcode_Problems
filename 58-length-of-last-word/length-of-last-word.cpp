class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        stringstream ss(s);
        string word;
        string res;
        while(ss>>word){
            res+=word;
            break;
        }
        return res.size();
    }
};