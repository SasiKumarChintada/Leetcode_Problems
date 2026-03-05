class Solution {
public:
    int minOperations(string s) {
        string temp1="";
        string temp2="";
        for(int i=0;i<s.size();i++){
            if(i%2==0) temp1+='1';
            else temp1+='0';
        }
        cout<<temp1<<endl;
        for(int i=0;i<s.size();i++){
            if(i%2==0) temp2+='0';
            else temp2+='1';
        }
        int cnt1=0,cnt2=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==temp1[i]) cnt1++;
            else cnt2++;
        }
        return min(cnt1,cnt2); 
    }
};