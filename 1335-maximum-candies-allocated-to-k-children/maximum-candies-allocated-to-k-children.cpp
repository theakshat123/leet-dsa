class Solution {
public:
    int maximumCandies(vector<int>& arr, long long k) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        
        int low=1,high=*max_element(arr.begin(),arr.end()),ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long pile=0;
            for(int i=0;i<n;i++){
                pile+=arr[i]/mid;
            }
            if(pile>=k){
                ans=mid;
            low=mid+1;
            }
            else{
                high=mid-1;
            }
        } return ans;
    }
};