class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;
        if(n==1) return nums[0];
        if(nums[0]<nums[n-1]) return nums[0];
        int lo = 0;
        int hi = n-1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(nums[mid]>=nums[lo]){
                ans = min(ans,nums[lo]);
                lo = mid+1;
            }else{
                ans = min(nums[mid],ans);
                hi = mid-1;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna