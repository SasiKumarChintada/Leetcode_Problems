class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1=s1.size();
        int n2=s2.size();
        vector<int>freq(26,0);
        for(int i=0;i<n1;i++){
            freq[s1[i]-'a']++;
        }
        int l=0;
        for(int r=0;r<n2;r++){
            freq[s2[r]-'a']--;
            while(freq[s2[r]-'a']<0){
                freq[s2[l]-'a']++;
                l++;
            }
            if(r-l+1>n1){
                freq[s1[l]-'a']++;
                l++;
            }
            if(r-l+1==n1){
                if(freq==vector<int>(26,0)) return true;
            }
        }
        return false;
    }
};