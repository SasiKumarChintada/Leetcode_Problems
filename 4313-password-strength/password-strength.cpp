class Solution {
public:
    int passwordStrength(string s) {
        int n=s.size();
        int small=0,big=0,dig=0,spe=0;
        unordered_map<char,int>freq;
        for(int i=0;i<n;i++){
            freq[s[i]]++;
            if(s[i]>='a' && s[i]<='z' && freq[s[i]]==1){
                small++;
            }
            else if(s[i]>='A' && s[i]<='Z' && freq[s[i]]==1){
                big+=2;
            }
            else if(s[i]>='0' && s[i]<='9' && freq[s[i]]==1){
                dig+=3;
            }
            else if((s[i]=='!' || s[i]=='@' || s[i]=='#' || s[i]=='$' ) && freq[s[i]]==1){
                spe+=5;
            }
        }
        return small+big+dig+spe;
    }
};