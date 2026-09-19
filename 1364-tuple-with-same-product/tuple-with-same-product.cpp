class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int mul=nums[i]*nums[j];
                mp[mul]++;
            }
        }
        for(auto &p:mp){
            int num=p.second;
            if(num>1) ans+=(num*(num-1)/2)*8;
        }
        return ans;
    }
};