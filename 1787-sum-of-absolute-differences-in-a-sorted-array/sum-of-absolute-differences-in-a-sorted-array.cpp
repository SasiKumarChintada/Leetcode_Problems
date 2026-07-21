class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        vector<int>pre(n);
        pre[0]=nums[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+nums[i];
        }
        vector<int>suff(n);
        suff[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suff[i]=suff[i+1]+nums[i];
        }
        vector<int>res;
        int left,right;
        for(int i=0;i<n;i++){
            if(i==0) res.push_back(pre[n-1]-n*nums[0]);
            else if(i==n-1) res.push_back(n*nums[n-1]-pre[n-1]);
            else{
                left=abs((i*nums[i])-pre[i-1]);
                right=abs((suff[i+1])-((n-i-1)*nums[i]));
                res.push_back(left+right);
                left=0;
                right=0;
            }
        }
        return res;
    }
};