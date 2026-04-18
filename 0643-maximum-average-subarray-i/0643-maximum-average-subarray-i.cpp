class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxSum = 0;
        double sum = 0;
        int n = nums.size();
        //1. build the window
        for(int i = 0;i<k;i++){
            sum+=nums[i];
        }
        maxSum = sum;
        //2. Slide the window
        for(int i =k;i<n;i++){
            sum = sum + nums[i] - nums[i-k];
            maxSum = max(sum,maxSum);
        }

        return maxSum/k;
    }
};