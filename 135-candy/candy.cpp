class Solution {
public:
    int candy(vector<int>& rat) {
        int n=rat.size();
        vector<int>res(n);
        vector<int>pre(n);
        pre[0]=0;
        for(int i=1;i<n;i++){
            if(rat[i]>rat[i-1]){
                pre[i]=pre[i-1]+1;
            }
        }
        vector<int>suff(n);
        suff[n-1]=0;
        for(int i=n-2;i>=0;i--){
            if(rat[i]>rat[i+1]){
                suff[i]=suff[i+1]+1;
            }
        }
        for(int x:pre) cout<<x<<" ";
        cout<<endl;
        for(int x:suff) cout<<x<<" ";
        int ans=n;
        for(int i=0;i<n;i++){
            ans+=max(suff[i],pre[i]);
        }
        return ans;
    }
};