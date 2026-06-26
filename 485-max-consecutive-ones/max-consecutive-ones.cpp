class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
      int n=arr.size();
      int maxo=0;int ans;
      for(int i =0;i<n;i++){
        if(arr[i]==1){
          maxo++;
        }
        else{
            maxo=0;
        }ans=max(ans,maxo);
      }  return ans;
    }
};