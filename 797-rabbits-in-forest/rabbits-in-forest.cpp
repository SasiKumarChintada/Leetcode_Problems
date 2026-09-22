class Solution {
public:
    int numRabbits(vector<int>& ans) {
        int n=ans.size();
        unordered_map<int,int>mp;
        for(int x:ans){
            mp[x]++;
        }
        int rab=0;
        for(auto &p:mp){
            if(p.second==1) rab+=(p.first+1);
            else if(p.second>p.first+1){
                while(p.second>0){
                    rab+=(p.first+1);
                    p.second-=p.first+1;
                }
            }
            else{
                rab+=p.first+1;
            }
        }
        return rab;
    }
};