class Solution {
public:

    int minimumDeleteSum(string s1, string s2) {
        int m=s1.size(),n=s2.size();
        
        vector<vector<int>> lcs(n+1,vector<int>(m+1,0));
        
        for(int i=0;i<=n;i++)
            for(int j=0;j<=m;j++)
                if(i==0 or j==0)
                    lcs[i][j]=0;
                else if(s2[i-1]==s1[j-1])
                    lcs[i][j] = (int)s2[i-1] + lcs[i-1][j-1];
                else
                    lcs[i][j] = max(lcs[i-1][j],lcs[i][j-1]);
        
        int rem=lcs[n][m];
        
        int s1a=0,s2a=0;

        for(auto i:s1)
            s1a+=(int)i;
        for(auto i:s2)
            s2a+=(int)i;
        
        return s1a+s2a-(2*rem);
    }
};