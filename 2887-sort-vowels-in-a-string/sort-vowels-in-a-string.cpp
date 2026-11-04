class Solution {
public:
    string sortVowels(string s) {
        int n=s.size();
        string ans="";
        for(int i=0;i<n;i++){
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || 
            s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                ans+=s[i];
            }
        }
        sort(ans.begin(),ans.end());
        cout<<ans;
        string res="";
        int p=0;
        for(int i=0;i<n;i++){
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || 
            s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                res+=ans[p];
                p++;
            }
            else res+=s[i];
        }
        return res;
    }
};