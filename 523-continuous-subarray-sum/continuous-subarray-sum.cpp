class Solution {
public:
    bool checkSubarraySum(vector<int>& arr, int k) {
         int sum=0,res=0;
       unordered_map<int,int>f;
       f[0]=-1;
       for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        int rem=sum%k;
        if(rem<0)
       
        rem+=k;
        
         if (f.find(rem) != f.end()) {
                if (i - f[rem] >= 2)
                    return true;
            } else {
                f[rem] = i;   
            }
       }
       return false;
    }
};