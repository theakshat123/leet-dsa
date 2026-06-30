class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
       int maxi = nums[0], mini = nums[0];
int sum1 = nums[0], sum2 = nums[0];

for (int i = 1; i < nums.size(); i++) {
    maxi = max(nums[i], nums[i] + maxi);
    sum1 = max(sum1, maxi);

    mini = min(nums[i], nums[i] + mini);
    sum2 = min(sum2, mini);
}

return max(abs(sum1), abs(sum2));
        
    }
};