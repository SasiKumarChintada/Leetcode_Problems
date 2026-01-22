class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i=0,j=0;
        while(j<word.size()){
            if(word[j]==ch){
                break;
            }
            j++;
        }
        if(j==word.size()) return word;
        while(i<j){
            swap(word[i],word[j]);
            i++;
            j--;
        }
        return word;
    }
};