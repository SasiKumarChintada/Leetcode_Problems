class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<int>freq1(10),freq2(10),freq3(10);
        vector<int>dup(10);
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    freq1[board[i][j]-'0']++;
                }
                if(board[j][i]!='.'){
                    freq2[board[j][i]-'0']++;
                }
                if(i%3==0 && j%3==0){
                for(int k=i;k<i+3;k++){
                    for(int l=j;l<j+3;l++){
                        if(board[k][l]!='.'){
                            freq3[board[k][l]-'0']++;
                        }
                    }
                }
                for(int p=0;p<10;p++){
                    if(freq3[p]>1){
                        return false;
                    }
                }
                freq3=dup;
                }
            }
            for(int i=0;i<10;i++){
                if(freq1[i]>1 || freq2[i]>1){
                    return false;
                }
            }
                freq1=dup;
                freq2=dup;
        }
        return true;
    }
};