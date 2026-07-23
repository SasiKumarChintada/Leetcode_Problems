class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=g.size()-1;
        int j=s.size()-1;
        int cnt=0;
        while(i>=0 && j>=0){
            if(s[j]>=g[i]){
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