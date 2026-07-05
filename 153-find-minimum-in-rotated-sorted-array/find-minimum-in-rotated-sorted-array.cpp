class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size()-1;
    int low=0,high=nums.size()-1;
    int res=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]>nums[n]){
            low=mid+1;
        }
        else{
            res=mid;
            high=mid-1;
        }
    } return nums[res];
    }
};