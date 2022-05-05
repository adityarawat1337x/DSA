class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> mp;
        for(auto i:s1)
            mp[i]++;
        
        for(int i=0,j=0;j<s2.size();j++){
            mp[s2[j]]--;
            if(mp[s2[j]]==0)
                mp.erase(s2[j]);
            
            if(j-i+1==s1.size()){
                if(mp.size()==0)
                    return true;
                mp[s2[i]]++;
                if(mp[s2[i]]==0)
                    mp.erase(s2[i]);
                i++;
            }
        }
        
        return false;
    }
};