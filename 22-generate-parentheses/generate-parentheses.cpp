class Solution {
public:
    void recursion(string &ds,vector<string>&res,int open,int close,int n){
        if(open==n && close==n){
            res.push_back(ds);
            return;
        }
        if(open<n){
            ds.push_back('(');   
            recursion(ds,res,open+1,close,n);
            ds.pop_back();
        }
        if(close<open && close<n){
            ds.push_back(')');
            recursion(ds,res,open,close+1,n);
            ds.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string ds="";
        vector<string>res;
        recursion(ds,res,0,0,n);
        return res;
    }
};