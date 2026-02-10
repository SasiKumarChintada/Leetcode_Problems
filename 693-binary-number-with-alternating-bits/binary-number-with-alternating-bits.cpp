class Solution {
public:
    bool hasAlternatingBits(int n) {
        long long  m = n>>1;
        long long ans = n^m;
        long long k=ans & (ans+1);
        if(k==0) return true;
        else return false;
    }
};