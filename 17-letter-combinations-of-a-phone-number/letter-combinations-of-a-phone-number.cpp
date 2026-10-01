class Solution {
public:
    void recursion(int indx,string &ds,vector<string>&res,vector<string>&find,int n){
        if(ds.size()==n){
            res.push_back(ds);
            return;
        }
        for(int i=0;i<find[indx].size();i++){ 
            ds.push_back(find[indx][i]);
            recursion(indx+1,ds,res,find,n);
            ds.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        int n=digits.size();
        string ds="";
        vector<string>res;
        vector<string>combi={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string>find;
        for(int i=0;i<n;i++){
            int k=digits[i]-'0';
            find.push_back(combi[k]); 
        }
        recursion(0,ds,res,find,n);
        return res;
    }
};