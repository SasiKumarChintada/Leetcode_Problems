class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int>res(32,0);
        for(int i=0;i<nums.size();i++){
            int x=0;
            while(x<32){
                int mask=(1<<x); 
                if( (nums[i] & mask) !=0){
                    res[x]++;
                }
                x++;
            }
        }
        int ans=0;
        for(int i=0;i<32;i++){
            if(res[i]%3 > 0){
                ans |= (1<<(i));
            }
        }
        return ans;
    }
};