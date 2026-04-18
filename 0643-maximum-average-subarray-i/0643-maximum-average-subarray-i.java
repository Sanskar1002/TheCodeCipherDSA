class Solution {
    public double findMaxAverage(int[] nums, int k) {
        double maxSum = 0;
        double sum = 0;
        int n = nums.length;
        //1. build the window
        for(int i = 0;i<k;i++){
            sum+=nums[i];
        }
        maxSum = sum;
        //2. Slide the window
        for(int i =k;i<n;i++){
            sum = sum + nums[i] - nums[i-k];
            if(sum>maxSum){
                maxSum = sum;
            }
        }

        return maxSum/k;
    }
}