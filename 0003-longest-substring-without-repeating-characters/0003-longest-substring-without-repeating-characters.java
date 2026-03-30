class Solution {
    public int lengthOfLongestSubstring(String s) {
        Set<Character> temp = new HashSet<>();
        int length = 0;
        int count = 0;
        for(int i=0,j=0;j<s.length();){
            if(!temp.contains(s.charAt(j))){
                temp.add(s.charAt(j));
                j++;
                count++;
                length = Math.max(length,count);
            }else{
                temp.remove(s.charAt(i));
                i++;
                count--;
            }
        }

        return length;
    }
}