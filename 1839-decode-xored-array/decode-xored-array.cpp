class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int n=encoded.size();
        cout<<n<<endl;
        vector<int>res(n+1,0);
        res[0]=first;
        res[1]=encoded[0]^first;
        for(int i=1;i<n;i++){
            res[i+1]=encoded[i]^res[i];  
        }
        return res;
    }
};