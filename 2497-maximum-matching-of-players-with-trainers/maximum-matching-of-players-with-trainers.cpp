class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& p, vector<int>& t) {
        sort(p.begin(),p.end());
        sort(t.begin(),t.end());
        int i=p.size()-1;
        int j=t.size()-1;
        int cnt=0;
        while(i>=0 && j>=0){
            if(p[i]<=t[j]){
                cnt++;
                i--;
                j--;
            }
            else{
                i--;
            }
        }
        return cnt;
    }
};