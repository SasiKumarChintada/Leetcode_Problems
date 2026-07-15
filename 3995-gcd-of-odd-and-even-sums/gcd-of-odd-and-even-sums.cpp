class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int even =n*n;
        int odd =n*(n+1);
        return gcd(even,odd);
    }
};