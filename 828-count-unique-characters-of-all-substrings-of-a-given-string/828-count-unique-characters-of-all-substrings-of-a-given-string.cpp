class Solution {
public:
    int uniqueLetterString(string s) {
        //consider a char unique and the find its maximum range
        int range[26][2],n=s.size(),res=0,mod=INT_MAX;
        memset(range,-1,sizeof(range));
        for(int i=0;i<s.size();i++){
            int c = s[i]-'A';
             res = (res + (i - range[c][1]) * (range[c][1] - range[c][0]) % mod) % mod;
            range[c][0]=range[c][1];
            range[c][1]=i;
        }
        
        for(int i=0;i<26;i++){
             res = (res + (n - range[i][1]) * (range[i][1] - range[i][0]) % mod) % mod;
        }
        
        return res;
    }
};