class Solution {
public:
    int xorOperation(int n, int start) {
        int ans=0,i=0,k;
        while(i<n){
            k=start+2*i;
            ans=k^ans;
            i++;
        }
        return ans;
    }
};