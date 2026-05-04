class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int n = nums.size();
        for(int num : nums){
            mpp[num]++;
        }
        int me = 0;
        for(auto pair : mpp){
            if(pair.second > n/2){
                me  = pair.first;
            }
        }
        return me;
    }
};