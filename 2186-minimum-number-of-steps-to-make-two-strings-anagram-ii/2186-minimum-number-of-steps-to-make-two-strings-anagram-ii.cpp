class Solution {
public:
    int minSteps(string s, string t) {
        if(s.size()<t.size())
            return minSteps(t,s);
        unordered_map<char,int> mp;
        unordered_map<char,int> mp2;
        
        for(auto i:s){
            mp[i]++;
        }
        
        for(auto i:t){
            mp2[i]++;
        }
        
        int ans=0;
        for(char c='a';c<='z';c++){
            int sc=mp[c],tc=mp2[c];
            ans+=abs(tc-sc);
        }
        
        return ans;
    }
};