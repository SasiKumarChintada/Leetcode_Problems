class Solution {
public:
    int minOperations(int n) {
        int e=0;
        int even=0;
        int cnt=0;
        vector<int>res;
        for(int i=1;i<=n;i++){
            if(i%2==0){
                cnt++;
                res.push_back(pow(cnt,2));
            }
            else{
                even = even + 2*e;
                res.push_back(even);
                e++;
            }
        }
        return res[n-1];
    }
};