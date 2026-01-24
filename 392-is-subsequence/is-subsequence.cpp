class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0,cnt=0;
        int size=s.size();
        while(i<t.length()){
            if(s[j]==t[i]){
                cnt++;
                j++;
                i++;
            }
            else i++;
        }
        return (cnt==size);
    }
};