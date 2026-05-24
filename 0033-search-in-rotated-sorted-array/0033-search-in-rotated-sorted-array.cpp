class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int lo = 0;
        int hi = n-1;

        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(nums[mid]==target) return mid;
           //check left is sotrted
           if(nums[lo]<=nums[mid]){
            if(target>=nums[lo]&& target<nums[mid]){
                hi = mid-1;
            }else{
                lo = mid+1;
            }
           }else{
            if(target<=nums[hi] && target >nums[mid]){
                lo = mid+1;
            }else{
                hi = mid-1;
            }
           }
        }

        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna