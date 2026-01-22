class Solution {
public:
    bool Ispalindrome(string s){
        string org=s;
        reverse(s.begin(),s.end());
        if(s==org) return true;
        else return false;
    }
    string firstPalindrome(vector<string>& words) {
        string j;
        for(int i=0;i<words.size();i++){
            if(Ispalindrome(words[i])){
                j=words[i];
                break;
            }
        }
        return j;
    }
};