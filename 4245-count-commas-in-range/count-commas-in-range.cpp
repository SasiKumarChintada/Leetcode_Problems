class Solution {
public:
    int countCommas(int n) {
        int store=n;
        int digits=0;
        while(store>0){
            digits++;
            store/=10;
        }
        int ans=0;
        if(digits==4 || digits==5) return ans+=(n-1000)+1;
        if(digits==6) return ans+=(n-1000)+1;
        return ans;
    }
};