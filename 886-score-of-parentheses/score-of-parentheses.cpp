class Solution {
public:
    int scoreOfParentheses(string s) {
        int score=0,deep=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                deep++;
            }
            else{
                deep--;
                if(s[i-1]=='('){
                    score+=pow(2,deep);
                }
            }
        }
        return score;
    }
};