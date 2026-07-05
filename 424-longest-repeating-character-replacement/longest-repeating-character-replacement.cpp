class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int maxL=INT_MIN;
        for(char x='A';x<='Z';x++){
            int l=0;
            int cnt=0;
            for(int r=0;r<n;r++){
                if(x!=s[r]) cnt++;
                while(cnt>k){
                    if(s[l]!=x) cnt--;
                    l++;
                }
                maxL=max(maxL,r-l+1);
            }
        }
        return maxL;
    }
};