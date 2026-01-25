class Solution {
public:
    bool rotateString(string s, string goal) {
        bool flag=false;
        int n=s.size();
        int i=1;
        while(i<=n){
            rotate(s.begin(),s.begin()+1,s.end());
            cout<<s<<endl;
            if(s==goal){
                flag=true;
                break;
            }
            i++;
        }
        return (flag);
    }
};