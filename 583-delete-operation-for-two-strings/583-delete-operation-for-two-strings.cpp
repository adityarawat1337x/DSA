class Solution {
public:
    int lcs(string a,string b){
        int dp[a.size()+1][b.size()+1];
        memset(dp,0,sizeof dp);
        for(int i=1;i<=a.size();i++){
            for(int j=1;j<=b.size();j++){
                if(a[i-1]==b[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                }else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        
        return dp[a.size()][b.size()];
    }
    
    int minDistance(string word1, string word2) {
        int len = lcs(word1,word2);
        return word1.size()+word2.size()-len-len;
    }
};