class Solution {
public:
    bool isHappy(int n) {
        while(n!=1){
        int sum=0;
        while(n>0){
            int last=n%10;
            sum+=last*last;
            n/=10;
        }
        n=sum;
        if(n>1 && n<=9)break;
        if(n==7) break;
        }
        return (n==1 || n==7);
    }
};