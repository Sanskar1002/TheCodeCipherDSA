class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxProd = nums[0];
        for(int i = 0;i<n;i++){
            int curProd = 1;
            for(int j = i;j<n;j++){
                curProd *= nums[j];
                maxProd = max(maxProd,curProd); 
            }
        }
        return maxProd;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna