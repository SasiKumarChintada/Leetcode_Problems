class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int min=arr[n-1]-arr[n-2];
        for(int i=n-2;i>0;i--){
            if(min>arr[i]-arr[i-1]){
                min=arr[i]-arr[i-1];
            }
        }
        vector<vector<int>>res; 
        for(int i=1;i<n;i++){
            if(arr[i]-arr[i-1]==min){
                res.push_back({arr[i-1],arr[i]}); 
            }
        }
        return res; 
    }
};