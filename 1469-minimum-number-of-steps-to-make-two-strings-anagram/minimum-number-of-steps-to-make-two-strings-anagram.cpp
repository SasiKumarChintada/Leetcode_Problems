class Solution {
public:
    int minSteps(string s, string t) {
        int n=s.size();
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
        for(int i=0;i<n;i++){
            freq1[s[i]-'a']++;
            freq2[t[i]-'a']++;
        }
        int ans=0;
        for(int i=0;i<26;i++){
            if(freq1[i]>freq2[i]) ans+=(freq1[i]-freq2[i]);
        }
        return ans;
    }
};