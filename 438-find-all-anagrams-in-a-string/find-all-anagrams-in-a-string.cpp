class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n1=s.size();
        int n2=p.size();
        if(n1<n2) return {};
        vector<int>res;
        vector<int>freq(26,0);
        vector<int>ans(26,0);
        for(int i=0;i<n2;i++){
            freq[p[i]-'a']++;
        }
        int l=0;
        for(int r=0;r<n1;r++){
            freq[s[r]-'a']--;
            if(r-l+1>n2){
                freq[s[l]-'a']++;
                l++;
            }
            if(r-l+1==n2){
                if(freq==ans) res.push_back(l);
            }
        }
        return res;
    }
};