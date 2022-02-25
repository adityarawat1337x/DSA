class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        set<string> dict;
        for(auto i:wordDict)
            dict.insert(i);
        
        long dp[s.size()+1];
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        for(int i=1;i<=s.size();i++){
            for(int j=0;j<=i;j++){
                string search = s.substr(j,i-j);
                if(dp[j] and dict.count(search)){
                    dp[i] = dp[j];
                    break;
                }
            }
        }
        
        return dp[s.size()];
    }
};