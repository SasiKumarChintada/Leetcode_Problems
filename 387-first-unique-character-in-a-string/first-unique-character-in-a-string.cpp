class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
        unordered_map<char,int>freq;
        for(char x:s){
            freq[x]++;
        }
        for(int i=0;i<n;i++){
            if(freq[s[i]]==1) return i;
        }
        return -1;
    }
};