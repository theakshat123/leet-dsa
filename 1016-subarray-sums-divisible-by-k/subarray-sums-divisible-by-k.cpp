class Solution {
public:
    int subarraysDivByK(vector<int>& arr, int k) {
       int sum=0,res=0;
       unordered_map<int,int>f;
       f[0]=1;
       for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        int rem=sum%k;
        if(rem<0)
        rem+=k;
        res+=f[rem];
        f[rem]++;
       }return res;
    }
};