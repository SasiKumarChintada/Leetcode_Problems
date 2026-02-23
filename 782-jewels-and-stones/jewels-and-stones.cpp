class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>umap;
        for(char x:stones){
            umap[x]++;
        }
        int sum=0;
        for(auto &p:umap){
            for(int i=0;i<jewels.size();i++){
                if(p.first==jewels[i]) sum+=p.second;
            }
        }
        return sum;
    }
};