class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++){
         sum+=arr[i];
        } int left=0;int right;
        for(int i=0;i<arr.size();i++){
           
           right=sum-arr[i]-left;
           if(left==right)
           return i;
           left+=arr[i];
        }return -1;
    }
};