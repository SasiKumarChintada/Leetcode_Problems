class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum > num*9 ) return "";
        int store = sum ;
        string ans = "";
        for(int i=9;i>=1;i--){
            while(sum>=i){
                ans+=to_string(i);
                sum-=i;
                if(sum==0) break;
            }
        }
        int have = ans.size();
        
        return (have==num) ? ans : ans+string(num-have,'0');
    }
};