class Solution {
public:
    string defangIPaddr(string address) {
        string res;
        for(int i=0;i<address.size();i++){
            if(address[i]=='.'){
                res+="[.]";
            }
            else{
                res+=address[i];
            }
        }
        return res;
    }
};