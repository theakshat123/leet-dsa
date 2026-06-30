class Solution {
public:
    int maximumSum(vector<int>& arr) {
     int nodel = arr[0], del = INT_MIN, ans = arr[0];

for (int i = 1; i < arr.size(); i++) {
    int pre = nodel;
    int pro = del;

    nodel = max(pre + arr[i], arr[i]);

    if (pro == INT_MIN)
       del=pre;
    else
        del = max(pro + arr[i], pre);

    ans = max(ans, max(nodel, del));
}

return ans;
    }
};