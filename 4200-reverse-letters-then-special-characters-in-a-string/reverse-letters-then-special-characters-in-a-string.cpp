class Solution {
public:
    string reverseByType(string s) {
        int n=s.size();
        int i=0,j=n-1;
        while(i<j){
            if(isalpha(s[i]) && isalpha(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(isalpha(s[i]) && !isalpha(s[j])){
                j--;
            }
            else if(!isalpha(s[i]) && isalpha(s[j])){
                i++;
            }
            else{
                i++;
                j--;
            }
        }
        cout<<s<<endl;
        i=0,j=n-1;
        while(i<j){
            if(!isalpha(s[i]) && !isalpha(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(!isalpha(s[i]) && isalpha(s[j])){
                j--;
            }
            else if(isalpha(s[i]) && !isalpha(s[j])){
                i++;
            }
            else{
                i++;
                j--;
            }
        }
        return s;
    }
};