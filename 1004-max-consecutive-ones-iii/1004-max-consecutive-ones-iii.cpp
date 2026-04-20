class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int maxLen = 0;
        for(int left = 0,right = 0;right<n;){
            if(nums[right]==1 || k){
                maxLen = max(maxLen,right-left+1);
                if(nums[right]==0){
                    k--;
                }
                right++;
            }else{
                if(nums[left]==0){
                    k++;
                }
                left++;
            }
        }
        return maxLen;
    }
};