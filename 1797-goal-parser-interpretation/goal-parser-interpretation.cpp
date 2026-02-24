class Solution {
public:
    string interpret(string s) {
        int i=0;
        while(i<s.size()){
            if(s[i]=='G') i++;
            else if(s[i]=='(' && s[i+1]==')'){
                s.replace(i,2,"o");
                i++;
            }
            else if(s[i]=='(' && s[i+1]=='a' && s[i+2]=='l' && s[i+3]==')') {
                s.replace(i,4,"al");
                i+=2;
            } 
        }
        return s;
    }
};