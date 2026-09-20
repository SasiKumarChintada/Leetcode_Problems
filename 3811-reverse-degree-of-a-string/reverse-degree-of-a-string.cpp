class Solution {
public:
    int reverseDegree(string s) {
        int n=s.size();
        int degree = 0;
        for(int i=0;i<n;i++){
            degree+=(i+1)*(26-(s[i]-'a'));
        }
        return degree;
    }
};