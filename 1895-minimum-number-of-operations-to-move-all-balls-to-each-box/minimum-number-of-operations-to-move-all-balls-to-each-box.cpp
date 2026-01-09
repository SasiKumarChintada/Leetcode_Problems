class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>res(boxes.size());
        int k=0;
        for(int i=0;i<boxes.size();i++){
            int sum=0;
            for(int j=0;j<boxes.size();j++){
                if(boxes[j]=='1') sum+=abs(i-j);
            }
            res[k++]=sum;
        }
        return res;
    }
};