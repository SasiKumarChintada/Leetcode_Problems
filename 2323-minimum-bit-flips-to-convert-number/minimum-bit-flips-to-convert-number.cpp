class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans=start ^ goal;
        return __builtin_popcount(ans);
    }
};