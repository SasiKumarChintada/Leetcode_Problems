class Solution {
public:
    int smallestNumber(int n) {
        if(n==1) return 1;
        bool flag=false;
        int k;
        for(int i=0;i<n;i++){
            if(pow(2,i)>n){
                k=pow(2,i);
                break;
            }
        }
        return k-1;
    }
};