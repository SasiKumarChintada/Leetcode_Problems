class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>have(26,0);
        for(char ch:s){
            have[ch-'a']++;
        }
        for(char ch:t){
            have[ch-'a']--;
        }
        for(int x: have){
            if(x!=0) return false;
        }
        return true;
    }
};