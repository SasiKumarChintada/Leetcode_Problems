class Solution {
public:
    int balancedStringSplit(string s) {
        int i=0,r=0,l=0,cnt=0;
        while(i<s.size()){
            if(s[i]=='L'){
                l++;
            }
            if(s[i]=='R'){
                r++;
            }
            if(l==r){
                cnt++;
                l=0;
                r=0;
            }
            i++;
        }
        return cnt;
    }
};