class Solution {
    public int removeDuplicates(int[] nums) {
        int size = nums.length;
        int slow = 0;
        for(int fast = slow+1;fast<size;fast++){
            if(nums[slow]!=nums[fast]){
                slow++;
                nums[slow] = nums[fast];
            }
        }

        return slow+1;
    }
}