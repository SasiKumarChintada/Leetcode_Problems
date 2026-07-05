class Solution {
public:
    int totalFruit(vector<int>& fru) {
        int n=fru.size();
        int l=0;
        int maxL=INT_MIN;
        unordered_map<int,int>mp;
        for(int r=0;r<n;r++){
            mp[fru[r]]++;
            while(mp.size()>2){
                mp[fru[l]]--; 
                if(mp[fru[l]] <= 0) mp.erase(fru[l]);
                l++;
            }
            maxL=max(maxL,r-l+1);
        }
        return maxL;
    }
};