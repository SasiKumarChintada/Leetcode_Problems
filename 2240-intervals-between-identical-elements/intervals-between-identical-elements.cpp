class Solution {
public:
    vector<long long> getDistances(vector<int>& nums) {
       int n=nums.size();
        vector<long long>res(n);
        unordered_map<int,vector<long long>>freq;
        for(int i=0;i<n;i++){
            freq[nums[i]].push_back(i);
        }
        for(auto &p:freq){
            vector<long long>&v=p.second;
            int v1=v.size();
            vector<long long>pre(v1);
            pre[0]=0;
            for(int i=1;i<v1;i++){
                pre[i]=pre[i-1]+i*(v[i]-v[i-1]);
            }
            vector<long long>suff(v1);
            suff[v1-1]=0;
            for(int i=v1-2;i>=0;i--){
                suff[i]=suff[i+1]+(v1-i-1)*(v[i+1]-v[i]);    
            }
            for(int i=0;i<v1;i++) cout<<suff[i]<<" ";
            cout<<endl;
            for(int i=0;i<v1;i++){
                res[v[i]]=pre[i]+suff[i];
            }
        }
        return res;
    }
};