class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>freq;
        for(int x:arr) freq[x]++;
        int maxi=0;
        for(const auto &[num,rep]:freq){
            if(num==rep){
                maxi=max(maxi,num);
            } 
        }
        return (maxi==0) ? -1 : maxi;
    }
};