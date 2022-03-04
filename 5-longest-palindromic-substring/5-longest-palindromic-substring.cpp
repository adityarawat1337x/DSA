class Solution {
public:
    bool ispal(string &s,int &n){
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1])
            return false;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int n=s.size();
        string p=s;
        reverse(p.begin(),p.end());
        int lcs[n+1][n+1];
        int m=-1;
        for(int i=0;i<=n;i++)
            for(int j=0;j<=n;j++){
                if(i==0 || j==0)
                    lcs[i][j]=0;
                else if(s[i-1]==p[j-1]){
                        lcs[i][j]=1+lcs[i-1][j-1];
                        m=max(m,lcs[i][j]);
                }
                else
                    lcs[i][j]=0;
                }
        
        cout<<m;
        while(m){
            for(int i=0;i+m<=n;i++){
                string t = s.substr(i,m);
                if(ispal(t,m)){
                    return t;
                }
            }
            m--;
        }
               
        return "";
    }
};