class Solution {
public:
    string baseNeg2(int n) {
        string bin = "";
        if(n==0) return "0";
        while(n!=0){
            int rem=n%(-2);
            int div=n/-2;
           // cout<<rem<<div<<endl;
            if(rem==-1){
                rem=rem+2;
                div=div+1;
                bin+='0'+rem;
            }
            else{
                bin+='0'+rem;
            }
            n=div;
        }
        reverse(bin.begin(),bin.end());
        return bin;
    }
};