class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int th) {
        int n=arr.size();
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        int sub=0;
        if(sum>=k*th) sub++;
        int l=0;
        for(int r=k;r<n;r++){
            sum+=arr[r];
            if(r-l+1>k){
                sum-=arr[l];
                l++;
            }
            if(r-l+1==k){
                if(sum>=k*th)sub++;
            }
        }
        return sub;
    }
};