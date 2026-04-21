class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        for(int left = 0,right=n-1;left<right;){
            int sum = nums[left]+nums[right];
            if(sum == target){
                ans.push_back(left+1);
                ans.push_back(right+1);
                break;
            }else if(sum>target){
                right--;
            }else{
                left++;
            }

        }

        return ans ;
    }
};