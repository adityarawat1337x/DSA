class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> mp;
        for(auto i:s)
            mp[i]++;
        
         for(auto i:t)
            mp[i]--;
        
        int ans=0;
        for(auto i:mp){
            ans+=i.second>0?i.second:0;
        }
        return ans;
    }
};