class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>freq(26);
        for(char x:magazine){
            freq[x-'a']++;
        }
        for(char x:ransomNote){
            freq[x-'a']--;
            if(freq[x-'a']<0) return false;
        }
        return true;
    }
};