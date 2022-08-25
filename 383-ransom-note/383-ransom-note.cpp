class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freq[26]={0};
        for(auto &i:magazine)
            freq[i-'a']++;
        
        for(auto &i:ransomNote){
            if(freq[i-'a']>0)
                freq[i-'a']--;
            else return false;
        }
        return true;
    }
};