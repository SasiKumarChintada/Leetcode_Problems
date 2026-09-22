class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n=l.size();
        vector<bool>res;
        for(int i=0;i<n;i++){
            vector<int>part;
            for(int j=l[i];j<=r[i];j++){
                part.push_back(nums[j]);
            }
            sort(part.begin(),part.end());
            bool flag=true;
            for(int i=2;i<part.size();i++){
                int q=part[1]-part[0];
                if(part[i]-part[i-1]!=q){
                    flag=false;
                    break;
                }
            }
            if(flag) res.push_back(true);
            else res.push_back(false);
        }
        return res;
    }
};