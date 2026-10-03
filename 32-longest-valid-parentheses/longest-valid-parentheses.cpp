class Solution {
public:
    int longestValidParentheses(string s) {
        int n=s.size();
        int open=0,close=0;
        int res=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(') open++;
            else close++;
            if(open==close){
                res=max(res,open+close);
            }
            else if(close>open){
                open=0;
                close=0;
            }
        }
        open=0,close=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='(') open++;
            else close++;
            if(open==close){
                res=max(res,open+close);
            }
            else if(open>close){
                open=0;
                close=0;
            }
        }
        return res;
    }
};