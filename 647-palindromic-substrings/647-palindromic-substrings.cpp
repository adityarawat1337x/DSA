class Solution {
public:
    int ans=0;
    void pal(string &s,int idx){
        for(int i=idx,j=idx;i>=0 and j<s.size() and s[i]==s[j];i--,j++)
            ans++;
        
        for(int i=idx,j=idx+1;i>=0 and j<s.size() and s[i]==s[j];i--,j++)
            ans++;
    }
    int countSubstrings(string s) {
        for(int i=0;i<s.size();i++){
             pal(s,i);
        }
        return ans;
    }
};