class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n=deck.size();
        sort(deck.begin(),deck.end());
        vector<int>res(n,0);
        int k=0;
        bool fill=true;
        while(k<n){
        for(int i=0;i<n;i++){
            if(res[i]==0){
                if(fill){
                    res[i]=deck[k];
                    k++;
                }
                fill=!fill;
            }
        }
        }
        return res;
    }
};