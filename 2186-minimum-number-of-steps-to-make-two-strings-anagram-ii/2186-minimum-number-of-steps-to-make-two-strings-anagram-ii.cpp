class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> mp;
        
        for(auto i:s){
            mp[i]++;
        }
        
        for(auto i:t){
            mp[i]--;
        }
        
        int ans=0;
        for(char c='a';c<='z';c++){
            ans+=abs(mp[c]);
        }
        
        return ans;
    }
};