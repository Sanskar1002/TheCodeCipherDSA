class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);
        int curMul = 1;
        //suffix
        for(int i = 0;i<n;i++){
            ans[i] =  curMul;
            curMul = curMul * nums[i];
        }
        curMul = 1;
        for(int i =n-1;i>=0;i--){
            ans[i] = ans[i] * curMul; 
            curMul = curMul * nums[i];
        }

        return ans;
    }
};