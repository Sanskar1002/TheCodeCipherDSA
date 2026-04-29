class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n,1);

        // we have store all the prefix
        int currMul = 1;
        for(int i = 0;i<n;i++){
            answer[i] = currMul;
            currMul = answer[i]*nums[i];
        }

        currMul = 1;
        for(int i = n-1;i>=0;i--){
            answer[i] = answer[i]*currMul;
            currMul = currMul * nums[i];

        }

        return answer;
    }
};