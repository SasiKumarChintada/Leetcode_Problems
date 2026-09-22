class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
       int n=a.size();
       vector<int>c;
       unordered_map<int,int>freqa,freqb;
       for(int i=0;i<n;i++){
           freqa[a[i]]++;
           freqb[b[i]]++;
           int ans=0;
           for(auto &p:freqa){
            if(freqb.find(p.first)!=freqb.end()) ans++;
           }
           c.push_back(ans);
       }
       return c;
    }
};