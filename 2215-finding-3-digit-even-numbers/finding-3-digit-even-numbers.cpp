class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>freq(10),ans;
        set<int>res;
        for(int x:nums) freq[x]++;
        for(int i=1;i<10;i++){
            if(freq[i]==0) continue;
            freq[i]--;
            for(int j=0;j<10;j++){
                if(freq[j]==0) continue;
                freq[j]--;
                for(int k=0;k<10;k+=2){
                    if(freq[k]==0) continue;
                    int num=i*100 + j*10 + k;
                    res.insert(num);
                }
                freq[j]++;
            }
            freq[i]++;
        }
        for(int x:res){
            ans.push_back(x);
        }
        return ans;
    }
};