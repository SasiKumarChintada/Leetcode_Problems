class Solution {
public:
    int arrangeCoins(int n) {
        long long low=1;
        long long high=n;
        while(low<=high){
            long long mid=low+(high-low)/2;
            long long coins=(mid*(mid+1))/2;
            if(coins==n) return mid;
            else if(coins>n){
                high=mid-1;
            }
            else low=mid+1;
        }
        return high;
    }
};