class Solution {
public:
    bool isPalindrome(string &s,int l,int r){
        while(l<r){
            if(s[l]!=s[r]) return false;
            l++;
            r--;
        }  
        return true;
    }
    int maxPalindromes(string s, int k) {
        int n=s.size();
        int l=0;
        int r=k-1;
        int pal=0;
        while(r<n){
            if(isPalindrome(s,l,r)){
                pal++;
                l=r+1;
                r+=k;
            }
            else{
                if(r-l+1==k){
                    r++;
                }
                else{
                    l++;
                }
            }
        }
        return pal;
    }
};