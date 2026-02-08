class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int n=nums.size(); 
        int curr_or;
        int maxii=0;
        for(int i=0;i<nums.size();i++){
            maxii=maxii|nums[i];
        }
        int cnt=0;
        for(int mask=0;mask<(1<<n);mask++){
            curr_or=0;
            for(int i=0;i<n;i++){
                if(mask & (1<<i)){
                    curr_or=curr_or|nums[i];
                }
            }
            if(curr_or==maxii) cnt++;
        }
        return cnt;
    }
};