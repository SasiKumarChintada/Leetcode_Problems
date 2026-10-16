class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            nums[i]=abs(nums[i]);
        }
        sort(nums.begin(), nums.end());
        long long sum = 0LL;
        bool flag = true;
        int i = 0, j = n - 1;
        while (i <= j) {
            int first = nums[i] * nums[i];
            int last = nums[j] * nums[j];
            if (flag) {
                if (first > last) {
                    sum += first;
                    i++;
                } else {
                    sum += last;
                    j--;
                }
                flag = !flag;
            }

            else {
                if (first < last) {
                    sum -= first;
                    i++;
                } else {
                    sum -= last;
                    j--;
                }
                flag = !flag;
            }
        }
        return sum;
    }
};