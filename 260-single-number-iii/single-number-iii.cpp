class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long total_xor = 0;
        for (int i = 0; i < nums.size(); i++) {
            total_xor ^= nums[i];
        }
        long long last_bit = total_xor & -(total_xor);
        long long a = 0, b = 0;
        for (int i = 0; i < nums.size(); i++) {
            if ((last_bit & nums[i]) > 0)
                a ^= nums[i];
            else
                b ^= nums[i];
        }
        return {(int)a,(int)b};
    }
};
