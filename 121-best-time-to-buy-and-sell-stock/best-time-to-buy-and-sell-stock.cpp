class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int>suff(n);
        suff[n-1]=prices[n-1];
        for(int i=n-2;i>=0;i--){
            suff[i]=max(suff[i+1],prices[i]);
        }
        for(int x:suff) cout<<x<<" ";
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(suff[i]-prices[i],maxi);
        }
        return maxi;
    }
};