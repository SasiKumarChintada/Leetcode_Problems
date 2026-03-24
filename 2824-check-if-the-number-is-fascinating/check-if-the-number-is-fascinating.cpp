class Solution {
public:
    bool isFascinating(int n) {
        int doublee=2*n;
        int thrice=3*n;
        string s=to_string(n);
        s+=to_string(doublee);
        s+=to_string(thrice);
        cout<<s;
        sort(s.begin(),s.end());
        return (s==to_string(123456789));
    }
};