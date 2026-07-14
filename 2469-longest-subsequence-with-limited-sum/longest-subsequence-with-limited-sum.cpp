class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& q) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>pre(n);
        pre[0]=nums[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+nums[i];
        }
        vector<int>res;
        for(int i=0;i<q.size();i++){
            bool p=false;
            for(int j=0;j<n;j++){
                if(pre[j]>q[i]){
                    p=true;
                    res.push_back(j);
                    break;
                }
            }
            if(p==false) res.push_back(nums.size());
        }
        return res;
    }
};