class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curMaxSum = nums[0];
        int maxSumSoFar = nums[0];
        for(int i = 1;i<nums.size();i++){
            curMaxSum = max(curMaxSum+nums[i],nums[i]);
            maxSumSoFar = max(maxSumSoFar,curMaxSum);
        }
        return maxSumSoFar;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna