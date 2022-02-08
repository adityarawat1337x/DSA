class Solution {
public:
 
    string longestCommonPrefix(vector<string>& strs) {
        string prefix=strs[0];
        
        for(auto s:strs){
            prefix = s.length()<prefix.length()?s:prefix;
        }
        
        for(auto s:strs){
            if(prefix=="")
                return prefix;
            for(int i=0;i<s.length() and i<prefix.size();i++){
                if(prefix[i]!=s[i]){
                    prefix = prefix.substr(0,i);
                }
            }
        }
        
        return prefix;
    }
};