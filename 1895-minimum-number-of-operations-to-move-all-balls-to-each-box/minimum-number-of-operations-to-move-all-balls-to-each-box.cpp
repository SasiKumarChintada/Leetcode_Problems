class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> res(n);
        vector<int> pre(n);
        pre[0] = 0;
        int cnt1 = 0;
        if (boxes[0] == '1')
            cnt1 = 1;
        for (int i = 1; i < n; i++) {
            if (cnt1 >= 1)
                pre[i] = pre[i - 1] + (cnt1);
            if (boxes[i] == '1')
                cnt1++;
        }
        for (int i = 0; i < n; i++) {
            cout << pre[i] << " ";
        }
        vector<int> suff(n);
        suff[n - 1] = 0;
        int cnt2 = 0;
        if (boxes[n - 1] == '1')
            cnt2 = 1;
        for (int i = n - 2; i >= 0; i--) {
            if (cnt2 >= 1)
                suff[i] = suff[i + 1] + (cnt2);
            if (boxes[i] == '1')
                cnt2++;
        }
        cout << endl;
        for (int i = 0; i < n; i++) {
            cout << suff[i] << " ";
        }
        for (int i = 0; i < n; i++) {
            res[i] = pre[i] + suff[i];
        }
        return res;
    }
};