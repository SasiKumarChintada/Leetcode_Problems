class Solution {
public:
    bool checkZeroOnes(string s) {
        int n=s.size();
        int maxi=-1,cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                cnt++;
                  maxi=max(cnt,maxi);
            }
            else{
                cnt=0;
            }   
        }
        cout<<maxi<<endl;
        int cnt1=0,maxi1=-1;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                cnt1++;
             maxi1=max(cnt1,maxi1);

            }
            else{
                cnt1=0;
            }
        }
        cout<<maxi1<<endl;
        return (maxi>maxi1);
    }
};