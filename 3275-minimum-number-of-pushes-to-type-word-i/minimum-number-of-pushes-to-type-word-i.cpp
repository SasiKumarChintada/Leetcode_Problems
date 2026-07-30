class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        cout<<n;
        if(n<=8) return n;
        if(n>8 && n<16) return 8+(n%8)*2;
        if(n==16) return 24;
        if(n>16 && n<24) return 24+(n%8)*3;
        if(n==24) return 48;
        if(n>24) return  48+(n%8)*4;
        return 0;
    }
};