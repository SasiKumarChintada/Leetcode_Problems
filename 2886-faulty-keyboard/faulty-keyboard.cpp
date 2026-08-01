class Solution {
public:
    string finalString(string s) {
        string res="";
        for(int x:s){
            if(x=='i'){
                reverse(res.begin(),res.end());
            } 
            else res+=x;
        }
        return res;
    }
};