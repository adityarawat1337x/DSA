class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        set<string> dict;
        for(auto i:wordDict)
            dict.insert(i);
        
        long dp[s.size()];
        memset(dp,0,sizeof(dp));
        
        for(int i=0;i<s.size();i++){
            for(int j=0;j<=i;j++){
                string search = s.substr(j,i-j+1);
                if(dict.count(search)){
                    if(j>0)
                        dp[i] = dp[i] or (dp[j-1] and 1);
                    else 
                        dp[i] = 1;
                }
            }
        }
        
        return dp[s.size()-1];
    }
};