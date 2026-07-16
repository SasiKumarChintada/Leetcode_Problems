class Solution {
public:
    bool checkValid(vector<vector<int>>& mat) {
        int n=mat.size();
        vector<int>freq1(n+1),freq2(n+1),dup(n+1);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                freq1[mat[i][j]]++;
                freq2[mat[j][i]]++;
            }
            for(int k=1;k<=n;k++){
                if(freq1[k]!=1 || freq2[k]!=1){
                    return false;
                }
            }
            freq1=dup;
            freq2=dup;
        }
        return true;
    }
};