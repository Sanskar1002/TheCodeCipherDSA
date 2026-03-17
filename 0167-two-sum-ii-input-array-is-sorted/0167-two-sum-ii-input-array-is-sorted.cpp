class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0;
        int right = n-1;
        vector<int> ans;

        while(left<right){
            int sum = nums[left]+nums[right];
            if(sum >target){
                right--;
            }else if(sum<target){
                left++;
            }else{
                ans.push_back(left+1);
                ans.push_back(right+1);
                break;
            }
        }

        return ans;
    }
};