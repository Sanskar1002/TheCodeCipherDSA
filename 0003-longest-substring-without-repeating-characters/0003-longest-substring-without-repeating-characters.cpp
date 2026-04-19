class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;
        int n = s.size();
        unordered_map<char,int> mpp;
        for(int left = 0,right = 0;right<n;){
            if(mpp.find(s[right])==mpp.end()) //mil gaya
            {
                mpp[s[right]]++;
                maxLen = max(maxLen,right-left+1);
                right++;
            }else{
                mpp[s[left]]--;
                if(mpp[s[left]] == 0){
                    mpp.erase(s[left]);
                }
                left++;
            }
        }
        return maxLen;
    }
};