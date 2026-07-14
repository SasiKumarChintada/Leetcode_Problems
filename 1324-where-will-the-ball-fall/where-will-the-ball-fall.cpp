class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int>res(n,-1);
        for(int st=0;st<n;st++){ 
            int row=0;
            int col=st;    
            while(row<m){
                if(grid[row][col]==1){
                    if(col+1<n && grid[row][col+1]==1 ){
                       row++;
                       col++;
                    }
                    else{
                        break;
                    }
                }
                else { 
                    if( col-1>=0 && grid[row][col-1]==-1 ){ 
                         row++;
                         col--;
                    }
                    else{
                        break;
                    }
                }
            }
            if(row==m) res[st]=col;
        }
        return res;
    }
};