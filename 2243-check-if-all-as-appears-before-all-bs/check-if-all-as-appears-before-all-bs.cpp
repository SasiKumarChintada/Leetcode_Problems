class Solution {
public:
    bool checkString(string s) {
        int n=s.size();
        int a=0,b=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a'){
                a++;
            }
            else{
                b++;
                if(b==1) a=0;
                if(b>0 && a>0){
                    return false;
                }
            }
        }
        if(b>0 && a>0){
            return false;
        }
        return true;
    }
};