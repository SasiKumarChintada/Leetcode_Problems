class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int n=arr.size();
        unordered_map<string,int>freq;
        for(string x:arr){
            freq[x]++;
        }
        for(int i=0;i<n;i++){
            if(freq[arr[i]]==1) k--;
            if(k==0) return arr[i];
        }
        return "";
    }
};