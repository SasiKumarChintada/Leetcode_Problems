class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        vector<int>arr=nums;
        int n=nums.size();
        for(int i=0;i<n;i++){
            long long rev=0;
            while(nums[i]>0){
                int last=nums[i]%10;
                rev=rev*10+last;
                nums[i]/=10;
            }
            arr.push_back(rev);
        }
        set<int>s;
        for(int x:arr) s.insert(x);
        return s.size();
    }
};