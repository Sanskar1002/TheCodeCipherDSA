class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //2 pointer
        int count = 0;
        int sum =  0;
        for(int left=0,right=0;right<nums.size();right++){
            sum = sum+nums[right];
            while(sum>k){
                sum = sum - nums[left];
                left++;
            }
            if(sum == k && left < nums.size()){
                count++;
            }
            
        }
        return count;
    }
};