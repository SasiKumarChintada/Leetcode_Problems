class Solution {
public:
    bool canAliceWin(int n) {
        int cnt=0;
        for(int i=10;i>=1;i--){
            if(n-i<0) break;
            n=n-i;
            cnt++;
        }
        return (cnt%2!=0) ? true : false;
    }
};