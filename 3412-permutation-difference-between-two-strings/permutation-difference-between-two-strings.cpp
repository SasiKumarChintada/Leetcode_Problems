class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int l1=s.size();
        int l2=s.size();
        int sum=0;
        for(int i=0;i<l1;i++){
            for(int j=0;j<l2;j++){
                if(s[i]==t[j]) sum+=abs(i-j);
            }
        }
        return sum;
    }
};