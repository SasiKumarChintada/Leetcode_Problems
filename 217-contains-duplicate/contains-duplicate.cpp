class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        cout<<n<<" ";
        set<int>s(nums.begin(),nums.end());
        int m=s.size();
        cout<<m;
        return (n!=m);
    }
};