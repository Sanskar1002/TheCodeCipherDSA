class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> temp;
        int length = 0;
        int count = 0;
        for(int i=0,j=0;j<s.length();){
            if(temp.find(s[j])==temp.end()){
                temp.insert(s[j]);
                j++;
                count++;
                length = max(length,count);
            }else{
                temp.erase(s[i]);
                i++;
                count--;
            }
        }

        return length;
    }
};