class Solution {
public:
    string clearDigits(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            st.push(s[i]);
            if(s[i]>='0' && s[i]<='9'){
                st.pop();
                st.pop();
            }
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};