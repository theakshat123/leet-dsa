class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& arr, int k) {
     int low=0,high=0;
        long long p = 1;int res=0;
        if(k<=1){
            return 0;
        }
        
        int n=arr.size();
        for(high=0;high<n;high++){
            p*=arr[high];
            while(p>=k){
              p/=arr[low];
              low++;
            }
            
                int len =high-low+1;
                res+=len;
            
        } 
        return res;
    }
};