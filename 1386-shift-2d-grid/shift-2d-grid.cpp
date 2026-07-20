class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int>mat;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mat.push_back(grid[i][j]);
            }
        }
        k=k%(m*n);
        rotate(mat.begin(),mat.end()-k,mat.end());
        vector<vector<int>>res(m,vector<int>(n,0));
        int idx=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                res[i][j]=mat[idx];
                idx++;
            }
        }
        return res;
    }
};