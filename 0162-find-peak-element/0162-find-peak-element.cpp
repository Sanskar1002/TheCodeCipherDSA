class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int lo = 1;
        int hi = n-2;
        if(n==1) return 0;
        if(nums[n-1]>nums[n-2]) return n-1;
        if(nums[0]>nums[1]) return 0;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(nums[mid]>nums[mid-1]&& nums[mid]>nums[mid+1]){
                return mid;
            }else if(nums[mid]>nums[mid+1]){
                hi = mid-1;
            }else if(nums[mid]> nums[mid-1]){
                lo = mid+1;
            }else{
                lo = mid+1;
            }
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna