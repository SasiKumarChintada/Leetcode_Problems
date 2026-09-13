class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        vector<vector<int>>pos1,pos2;
        for(int i=0;i<img1.size();i++){
            for(int j=0;j<img1[0].size();j++){
                if(img1[i][j]==1) pos1.push_back({i,j});
                if(img2[i][j]==1) pos2.push_back({i,j});
            }
        }
        int n=img1.size();
        int m=img1[0].size();
        int maxi=0;
        for(int i=-n+1;i<n;i++){
            for(int j=-m+1;j<m;j++){
                int overlap=0;
                for(int k=0;k<pos1.size();k++){
                    int x1=pos1[k][0]+i;
                    int y1=pos1[k][1]+j;
                    if(x1<0 || x1>=n || y1<0 || y1>=m) continue;
                    if(img2[x1][y1]==1) overlap++;
                }
                maxi=max(maxi,overlap);
            }
        }
        return maxi;
    }
};