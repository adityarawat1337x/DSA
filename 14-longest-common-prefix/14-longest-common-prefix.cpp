class Solution {
   static bool comp(string a,string b){
        return a.length()<b.length();
    }
public:
 
    string longestCommonPrefix(vector<string>& strs) {
        
        sort(strs.begin(),strs.end(),comp);
        string prefix=strs[0];
        
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