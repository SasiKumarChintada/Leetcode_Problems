class Solution {
public:
    bool possible(vector<int>& time, long long  mid, int trips){
        int n=time.size(); 
        long long cnt=0;
        for(int i=0;i<n;i++){
            cnt+=(mid/time[i]);
            if(cnt>=trips) break;
        }
        if(cnt>=trips) return true;
        else return false;
    }
    long long minimumTime(vector<int>& time, int trips) {
        long long low=*min_element(time.begin(),time.end());
        long long high=(long long)(*min_element(time.begin(),time.end()))*trips;  
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(possible(time,mid,trips)){
                high=mid-1;
            }
            else low=mid+1;
        }
        return low;
    }
};