class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
       vector<vector<int>>ans;
       sort(arr.begin(),arr.end());
       int res;
     int n=arr.size();
     for(int i=0;i<n-2;i++){
        if(i>0&&arr[i]==arr[i-1])
        continue;
        int left=i+1,right=n-1;
        while(left<right){
             res=arr[i]+arr[left]+arr[right];
            if(res==0){
               ans.push_back({arr[i],arr[left],arr[right]});
               left++;
               right--;
               while(left<right&&arr[left]==arr[left-1])left++;
        while(left<right&&arr[right]==arr[right+1])right--;
                
            }
            else if(res>0){
                right--;
            }
            else{
                left++;
            }
        }
     } return ans;  
       }
};