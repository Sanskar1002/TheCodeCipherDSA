class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        int i = 0;
        int j = 0;
        for(i = 0;i<n;i++){
            if(nums[i]==target){
                ans.push_back(i);
                break;
            }
        }
        
        for( j = i;j<n;j++){
            if(nums[j]!=target){
                ans.push_back(j-1);
                break;
            }
        }
        if(j==n){
            ans.push_back(n-1);
        }

        if(i==n){
            return {-1,-1};
        }

        return ans;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna