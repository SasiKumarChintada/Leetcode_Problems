class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.size();
        sort(s.rbegin(),s.rend());
        int idx=s.find_last_of('1');
        swap(s[idx],s[n-1]);
        return s;
    }
};