class Solution {
public:
    bool isPalindrome(const string& s, int st, int e) {
        while(st < e) {
            if(s[st] != s[e]) return false;
            st++;
            e--;
        }
        return true;
    }
    int maxPalindromes(string s, int k) {
        int ans = 0;
        int le = -1;
        int n = s.size();
        for(int i = k - 1; i < n; i++) {
            int st = i - k + 1;
            if(st > le && isPalindrome(s, st, i)) {
                ans++;
                le = i;
                continue;
            }
            st = i - k;
            if(st > le && isPalindrome(s, st, i)) {
                ans++;
                le = i;
            }
        }
        return ans;
    }
};