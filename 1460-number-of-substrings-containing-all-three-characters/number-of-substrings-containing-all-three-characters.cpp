class Solution {
public:
    int Atmost(string s,int k){
        int n=s.size();
        int l=0;
        int cnt=0;
        unordered_map<int,int>mp;
        for(int r=0;r<n;r++){
            mp[s[r]]++;
            while(mp.size()>k){
                mp[s[l]]--;
                if(mp[s[l]]<=0) mp.erase(s[l]);
                l++;
            }
            cnt+=(r-l+1);
        }
        return cnt;
    }
    int numberOfSubstrings(string s) {
        return Atmost(s,3)-Atmost(s,2);
    }
};