class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n=s.size();
        vector<int>res;
        for(int i=0;i<n;i++){
            res.push_back(abs(s[i]-t[i]));
        }
        int l=0;
        int sum=0;
        int ans=INT_MIN;
        for(int r=0;r<n;r++){
            sum+=res[r];
            //if(r==0 && ascii>maxCost) return 0;
            while(sum>maxCost){
                sum-=res[l];
                l++; 
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};