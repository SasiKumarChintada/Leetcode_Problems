class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                for(int k=i;k<=j;k++){
                    int z=j-i+1;
                    if(z%2!=0){
                        cnt+=arr[k];
                    }
                }
            }
        }
        return cnt;
    }
};