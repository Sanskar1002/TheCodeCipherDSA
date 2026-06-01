class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n1 = nums1.size();
        int n2 = nums2.size();
        int i = 0;
        int j = 0;

        for(i = 0;i<n1;i++){
            int gre = -1;
            bool flag = false;
            for(j = 0; j<n2;j++){
                if(nums1[i]==nums2[j]) flag= true;
                if(flag && nums2[j] > nums1[i]){
                    ans.push_back(nums2[j]);
                    break;
                }
            }
            if(j>=n2){
                ans.push_back(-1);
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna