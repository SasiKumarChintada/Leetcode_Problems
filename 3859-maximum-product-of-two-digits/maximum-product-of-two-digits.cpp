class Solution {
public:
    int maxProduct(int n) {
        vector<int>nums;
        while(n>0){
            int k=n%10;
            nums.push_back(k);
            n/=10;
        }
        sort(nums.begin(),nums.end());
        int p=nums.size();
        for(int x:nums) cout<<x<<" ";
        return nums[p-1]*nums[p-2];
        //return (s[n-1]-'0')*(s[n-2]-'0');
    }
};