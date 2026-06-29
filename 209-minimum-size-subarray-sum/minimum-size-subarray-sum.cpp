class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
    int low=0,high=0,res=INT_MAX;
    int n=arr.size(); int sum=0;
    while(high<n){
        sum+=arr[high];
        while(sum>=target){
            int len=high-low+1;
            res=min(res,len);
            sum-=arr[low];
            low++;
        }high++;
    } return res == INT_MAX ? 0 : res;
    
    }
    };