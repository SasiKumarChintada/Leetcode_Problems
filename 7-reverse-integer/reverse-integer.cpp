class Solution {
public:
    int reverse(int x) {
        if(x==INT_MIN) return 0;
        int org=x;
        x=abs(x);
        string s=to_string(x);
        std::reverse(s.begin(),s.end());
        long long ans=stoll(s);
        if(ans>INT_MAX || ans<INT_MIN) return 0;
        if(org<0) return -1*ans;
        else return ans;
    }
};