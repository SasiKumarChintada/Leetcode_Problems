class Solution {
public:
    bool isValid(string &s,int l,int r){
        // base case
        int n=s.size();
        if(l>=n/2){
            return true;
        }
        //recursive case
        if(s[l]!=s[r]) return false;
        return isValid(s,l+1,r-1);
    }
    bool isPalindrome(string s) {   
        string str="";
        for(int i=0;i<s.size();i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
                str+=tolower(s[i]);
            }
        }
        int n=str.size();
        if(isValid(str,0,n-1)) return true;
        else return false;
    }
};