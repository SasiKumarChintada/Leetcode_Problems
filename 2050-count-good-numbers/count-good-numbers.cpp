class Solution {
public:
    long long mod=1e9+7;
    long long expo(long long x,long long n){
        long long ans=1;
        while(n>0){
            if(n%2==1){
                ans=(ans*x)%mod;
                n--;
            }
            else{
                n/=2;
                x=(x*x)%mod;
            }
        }
        return ans;
    }
    int countGoodNumbers(long long n) {
        long long ans=0;
        long long ifEven=(n+1)/2;
        long long ifOdd=n-ifEven;
        ans=(expo(5,ifEven)%mod * (expo(4,ifOdd))%mod);
        return ans;
    }
};