class Solution {
public:
    bool isHappy(int n) {
        while(n!=1){
            int org=n;
            int sum=0;
            while(org>0){
                sum+=(org%10)*(org%10);
                org/=10;
            }
            n=sum;
            if(sum>1 && sum<=9) break;
        }
        return (n==1 || n==7);
    }
};