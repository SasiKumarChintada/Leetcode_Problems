class Solution {
public:
    int minimumPushes(string word) {
        int n1=word.size();
        vector<int>freq(26,0);
        vector<int>sortt;
        for(int x:word){
            freq[x-'a']++;
        }
        sort(freq.rbegin(),freq.rend());
        for(int x:freq){
            if(x!=0) sortt.push_back(x);
        }
        int n2=sortt.size();
        if(n2<=8) return n1;

        if(n2>8 && n2<=16){
            int cnt=0;
            int ans=0;
            for(int i=0;i<sortt.size();i++){
                cnt++;
                if(cnt<=8){
                    ans+=sortt[i];
                }
                else if(cnt>8 && cnt<=16){
                    ans+=sortt[i]*2;
                }
            }
            return ans;
        }
        if(n2>16 && n2<=24){
            int cnt3=0;
            int ans3=0;
            for(int i=0;i<sortt.size();i++){
                cnt3++;
                if(cnt3<=8){
                    ans3+=sortt[i];
                }
                else if(cnt3>8 && cnt3<=16){
                    ans3+=(sortt[i]*2);
                }
                else ans3+=(sortt[i]*3);
            }
            return ans3;
        }
        if(n2==25 || n2==26){
            int cnt4=0;
            int ans4=0;
            for(int i=0;i<sortt.size();i++){
                cnt4++;
                if(cnt4<=8){
                    ans4+=sortt[i];
                }
                else if(cnt4>8 && cnt4<=16){
                    ans4+=(sortt[i]*2);
                }
                else if(cnt4>16 && cnt4<=24){
                    ans4+=(sortt[i]*3);
                }
                else ans4+=(sortt[i]*4);
            }
            return ans4;
        }
        return 0;
    }
};