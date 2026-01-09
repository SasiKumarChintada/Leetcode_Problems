class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>umap;
        for(char i:s){
            umap[i]++;
        }
        int vmax=0;
        int cmax=0;
        for(auto &p:umap){
            char k=p.first;
            if(k=='a' || k=='e' || k=='i' || k=='o' || k=='u'){
                vmax=max(vmax,p.second);
            }
            else{
                cmax=max(cmax,p.second);
            }
        }
        return vmax+cmax;
    }
};