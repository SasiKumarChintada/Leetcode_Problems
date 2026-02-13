class Solution {
public:
    vector<int> evenOddBit(int n) {
       bitset<32>b(n);
       int even_cnt=0,odd_cnt=0;
       for(int i=0;i<32;i++){
           if(b.test(i)==1){
            if(i%2==0) even_cnt++;
            else odd_cnt++;
           }
       }
       return {even_cnt,odd_cnt};
    }
};