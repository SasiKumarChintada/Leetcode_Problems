class Solution {
public:
    long long countCommas(long long n) {
        long long ans=0;
        if(n<=999) return 0;
        else if(n<=999999 && n>=1000){
            ans+=(n-999);
        }
        else if(n<=999999999 && n>=1000000){
            ans+=(n-999);
            ans+=(n-999999);
        }
        else if(n<=999999999999 && n>=1000000000){
            ans+=(n-999);
            ans+=(n-999999);
            ans+=(n-999999999);
        }
        else if(n<=999999999999999 && n>=1000000000000){
            ans+=(n-999);
            ans+=(n-999999);
            ans+=(n-999999999);
            ans+=(n-999999999999);
        }
        else{
            ans+=(n-999);
            ans+=(n-999999);
            ans+=(n-999999999);
            ans+=(n-999999999999);
            ans++;
        }
        return ans;
    }
};