class Solution {
public:
    int trailingZeroes(int n) {
        int ans1=n/5;
        int i=2;
        int ans2=0;
        while(true){
            ans2+=n/pow(5,i);
            i++;
            if(pow(5,i)>n) break;
        }
        return ans1+ans2;
    }
};