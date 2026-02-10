class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char,int>smap;
        unordered_map<char,int>tmap;
        for(int i=0;i<s.size();i++){
            smap[s[i]]=i;
            tmap[t[i]]=i;
        }
        int sum=0;
        for(int i=0;i<s.size();i++){
            char a=s[i];
            sum+=abs(smap[a]-tmap[a]);
        }
        return sum;

    }
};
