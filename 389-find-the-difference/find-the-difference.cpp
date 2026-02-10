class Solution {
public:
    char findTheDifference(string s, string t) {
        string combine=s+t;
        int ans=0;
        for(int i=0;i<combine.size();i++){
            ans=ans^combine[i];
        }
        return ans;
    }
};