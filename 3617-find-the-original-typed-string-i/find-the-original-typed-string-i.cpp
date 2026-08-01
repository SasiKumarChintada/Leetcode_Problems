class Solution {
public:
    int possibleStringCount(string word) {
        int i=0,j=1;
        int cnt=1;
        while(j<word.size()){
            if(word[i]==word[j]){
                cnt++;
            }
                i++;
                j++;
        }
        return cnt;
    }
};