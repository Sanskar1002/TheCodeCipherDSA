class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int ans = -1;
        if(n==1) return nums[0];
        if(nums[0]<nums[n-1]) return nums[0];
        for(int i = 1;i<n;i++){
            if(nums[i]<nums[i-1]){
               ans = nums[i];
               break;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna