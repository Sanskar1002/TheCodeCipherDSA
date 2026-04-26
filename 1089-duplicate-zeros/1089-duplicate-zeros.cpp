class Solution {
public:
    void duplicateZeros(vector<int>& nums) {
        int n = nums.size();
        int slow=0;
        int fast = n-1;

        while(slow<n){
            if(nums[slow]==0){
                while(fast>slow){
                    nums[fast] = nums[fast-1];
                    fast--;
                }
                fast = n-1;
                slow = slow+2;
            }else{
                slow++;
            }
        }
    }
};