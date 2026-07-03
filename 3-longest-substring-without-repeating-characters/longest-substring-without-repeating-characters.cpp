class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        unordered_map<char,int>mp;
        int l=0;
        int maxL=INT_MIN;
        for(int r=0;r<n;r++){
            mp[s[r]]++;
            while(mp[s[r]]>1){
                mp[s[l]]--;
                if(mp[s[l]]<=0){
                    mp.erase(s[l]);
                }
                l++;
            }
            maxL=max(maxL,r-l+1);
        }
        return (maxL==INT_MIN)? 0 : maxL;
    }
};