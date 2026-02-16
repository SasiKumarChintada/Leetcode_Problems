class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1) return true;
        if(n<=0) return false;
        int Isbit=__builtin_popcount(n);
        int trail0 = __builtin_ctz(n); 
        if(Isbit==1 && trail0%2==0) return true;
        else return false; 
    }
};