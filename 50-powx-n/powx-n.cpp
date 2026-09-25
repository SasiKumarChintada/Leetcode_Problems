class Solution {
public:
    double helper(double x,long long n){
        if(n==0) return 1;
        if(n&1){
            return x*(helper(x,n-1));  
        }
        else{
            return (helper(x*=x,n/=2));   
        }
    }
    double myPow(double x, int n) {
        long long pow=n;
        return (pow<0) ? (1/helper(x,-pow)) : (helper(x,pow));
    }
};