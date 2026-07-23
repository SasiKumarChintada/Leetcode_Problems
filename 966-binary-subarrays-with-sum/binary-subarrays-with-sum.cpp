class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>pre(n);
        pre[0]=nums[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+nums[i];
        }
        unordered_map<int,int>freq;
        freq[0]=1;
        int cnt=0;
        for(int i=0;i<n;i++){
            int val=pre[i]-k;
            if(freq.count(val)){
                cnt+=freq[val];
            }
            freq[pre[i]]++;
        }
        return cnt;
    }
};