class Solution {
public:
    bool detectCapitalUse(string s) {
        int n=s.size();
        int cnt=0,cat=0;
        bool y1=false,y2=false,y3=false;
        for(int i=0;i<n;i++){
            if(isupper(s[i])){
                cnt++;
                if(cnt==n) y1=true;
            }
        }
        for(int i=0;i<n;i++){
            if(islower(s[i])){
                cat++;
                if(cat==n) y2=true;
            }
        }
        int j=0;
        for(int i=1;i<n;i++){
            if(isupper(s[0]) && islower(s[i])){
                j++;
            }
            if(j==n-1) y3=true;
        }
        return (y1 || y2 || y3);
    }
};