class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long maxSum = 0;
       unordered_map<int,int> mpp;
        long long sum = 0;
        int n=nums.size();
        for(int i = 0;i<k;i++){
            sum = sum + nums[i];
            mpp[nums[i]]++;
            if(mpp.size()==k){
                maxSum = max(maxSum,sum);
            }

        }
        // if(st.size()==k){
        //     maxSum = max(maxSum,sum);
        // }

        for(int i=k;i<n;i++){
            sum = sum+nums[i]-nums[i-k];
            mpp[nums[i]]++;
            mpp[nums[i-k]]--;
            if( mpp[nums[i-k]]==0){
                mpp.erase(nums[i-k]);
            }
            if(mpp.size()==k){
                maxSum = max(maxSum,sum);
            }
        }
        return maxSum;
    }
};