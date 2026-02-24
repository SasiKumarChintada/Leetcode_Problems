class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi;
        for(auto &word: sentences){
            int cnt=0;
            for(char x:word){
                if(x==' ') cnt++;
                maxi= max(maxi,cnt);
            }
        }
        return maxi+1;
    }
};