class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int maxLen = 0;
        int n = nums.size();
        for(int num : nums){
            st.insert(num);
        }

        for(int num:st){
            
            if(st.find(num-1)==st.end()){
                int currEle = num;
                int length = 1;
                while(st.find(currEle+1)!=st.end()){
                    length++;
                    currEle++;
                }

                maxLen = max(maxLen,length);
            }
        }

        return maxLen;
    }
};