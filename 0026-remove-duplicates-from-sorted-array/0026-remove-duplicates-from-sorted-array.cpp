class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        int slow = 0;
        for(int fast = slow+1;fast<size;fast++){
            if(nums[slow]!=nums[fast]){
                slow++;
                nums[slow] = nums[fast];
            }
        }

        return slow+1;
    }
};