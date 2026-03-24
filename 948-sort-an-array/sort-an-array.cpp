class Solution {
public:
    void merge(vector<int>&arr,int l,int m,int h){
        int res[h-l+1];
        int i=l,j=m+1,k=0;
        while(i<=m && j<=h){
            if(arr[i]<arr[j]) res[k++]=arr[i++];
            else res[k++]=arr[j++];
        }
        while(i<=m) res[k++]=arr[i++];
        while(j<=h) res[k++]=arr[j++];
        k=0;
        for(int i=l;i<=h;i++){
            arr[i]=res[k++];
        }
    }
    void merge_sort(vector<int>&arr,int l,int h){
        if(l<h){
            int m=(l+h)/2;
            //applied ai eng,ml engineer,
            merge_sort(arr,l,m);
            merge_sort(arr,m+1,h);
            merge(arr,l,m,h);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        merge_sort(nums,0,nums.size()-1);
        return nums;
    }
};