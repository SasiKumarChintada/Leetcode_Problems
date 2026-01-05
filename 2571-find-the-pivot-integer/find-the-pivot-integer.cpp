class Solution {
public:
    int pivotInteger(int n) {
        if(n==1) return 1;
        int sum=(n*(n+1))/2;
        vector<int>left(n);
        left[0]=1;
        int ans=-1;
        for(int i=1;i<n;i++){
            left[i]=left[i-1]+(i+1);
            int right=sum-left[i-1];
            if(left[i]==right){
                ans=i+1;
                break;
            }
        }
        return ans;
    }
};