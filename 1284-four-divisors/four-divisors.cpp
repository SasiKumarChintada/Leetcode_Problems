class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int n=nums.size();
        int totalsum=0;
        for(int i=0;i<n;i++){ //21
        int cnt=0,sum=0;
        for(int j=1;j*j<=nums[i];j++){
            if(nums[i]%j==0){
                int actual=nums[i]/j;
                if(j==actual){
                    cnt++;
                    sum+=j;
                }
                else {
                    cnt+=2;
                    sum+=j+actual;
                }
            }
            if(cnt>4) break;
        }
        if(cnt==4) totalsum+=sum;
        }
        return totalsum;
    }
};