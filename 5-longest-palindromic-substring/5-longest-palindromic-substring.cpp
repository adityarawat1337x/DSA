class Solution {
public:
    bool ispal(string s,int n){
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1])
            return false;
    }
    return true;
}

    string longestPalindrome(string s) {
        int n=s.size();
        string p;
        bool lps[n][n];
        int m=-1;
            
        for(int i=n-1;i>-1;i--)
            for(int j=i;j<n;j++){
                lps[i][j] = (s[i]==s[j]) && (j-i<3 || lps[i+1][j-1]);
                
                if(lps[i][j] && j-i+1>m){
                    int l = j-i+1;
                        m=l;
                        p=s.substr(i,l);
                }
        }
        return p;
    }
};