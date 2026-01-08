class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<double>average;
        int i=0,j=nums.size()-1;
        while(i<j){
            int a=nums[i];
            int b=nums[j];
            double avg=(double)(a+b)/2;
            cout<<avg<<" ";
            average.push_back(avg);
            i++;
            j--;
        }
        double ans=*min_element(average.begin(),average.end());
        return ans;
    }
};