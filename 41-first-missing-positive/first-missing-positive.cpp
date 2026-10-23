class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
        int n=arr.size();
        int i=0;
        while(i<n){
            if(arr[i]<=0 || arr[i]>n){
                i++;
                continue;
            }
            if(arr[i]==i+1){
                i++;
            }
            else{
                if(arr[i]==arr[arr[i]-1]){
                    i++;
                    continue;
                }
                swap(arr[i],arr[arr[i]-1]);
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]!=i+1) return i+1;
        }
        return n+1;
    }
};