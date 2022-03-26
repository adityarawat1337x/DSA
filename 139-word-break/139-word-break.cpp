class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        set<string> st;
        for(auto i:wordDict)
            st.insert(i);
        
        vector<bool> dp(s.size()+1);
        dp[0]=true;
        
        for(int i=1;i<=s.size();i++){
            for(int j=0;j<i;j++){
                string search = s.substr(j,i-j);
                if(st.count(search) and dp[j]){
                    dp[i]=true;
                    break;
                }
            }
        }
        
        return dp.back();
    }
};