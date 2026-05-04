class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> rnCount;
        unordered_map<char,int> mgCount;
        for(char ch : ransomNote){
            rnCount[ch]++;
        }

        for(char ch : magazine){
            mgCount[ch]++;
        }

        for(auto pair :rnCount){
            if(mgCount.find(pair.first)== mgCount.end()){
                return false;
            }else if(mgCount.find(pair.first)!= mgCount.end()){
                if(mgCount[pair.first]<rnCount[pair.first]){
                    return false;
                }
            }
        }

        return true;
    }
};