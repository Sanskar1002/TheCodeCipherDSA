class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> mpp;
        stack<int> st;
        int n1 = nums1.size();
        int n2 = nums2.size();

        st.push(nums2[0]);
        for(int num:nums2){
            while(!st.empty() && num > st.top()){
                mpp[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }

        while(!st.empty()){
            mpp[st.top()] = -1;
            st.pop();
        }

        for(int num:nums1){
            ans.push_back(mpp[num]);
        }

        return ans ;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna