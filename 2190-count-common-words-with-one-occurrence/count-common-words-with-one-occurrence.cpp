class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int>freq1,freq2;
        for(string x:words1){
            freq1[x]++;
        }
        for(string x:words2){
            freq2[x]++;
        }
        for(auto it=freq1.begin();it!=freq1.end();){ 
            if(it->second>1) it=freq1.erase(it);
            else it++;
        }        
        int ans=0;
        for(auto &p:freq1){
            if(freq2[p.first]==1) ans++;
        }
        return ans;
    }
};