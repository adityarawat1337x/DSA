class Solution {
public:
    bool solve(string s, string p,int idxS,int idxP,vector<vector<int>> &dp){
        if(idxS==-1 and idxP==-1)
            return true;
        if(idxS==-1){
            while(idxP>-1){
                if(p[idxP]!='*')
                    return false;
                idxP-=2;
            }
            return true;
        }
        if(idxP==-1)
            return false;
        if(idxS==-1)
            return false;
        if(dp[idxS][idxP]!=2)
            return dp[idxS][idxP];
        
        if(s[idxS]==p[idxP] or p[idxP]=='.'){
            return dp[idxS][idxP] = solve(s,p,idxS-1,idxP-1,dp);
        }
        else if(p[idxP]=='*' and (s[idxS]==p[idxP-1] or p[idxP-1]=='.')){
            int match = solve(s,p,idxS-1,idxP,dp);
            int mismatch = solve(s,p,idxS-1,idxP-1,dp);
            int dontUse = solve(s,p,idxS,idxP-2,dp);
            return dp[idxS][idxP] = dontUse or match or mismatch;
        }else if(p[idxP]=='*'){
            int dontUse = solve(s,p,idxS,idxP-2,dp);
            return dp[idxS][idxP] = dontUse;
        }
        
        return dp[idxS][idxP] = false;
    }

    bool isMatch(string s, string p) {
        vector<vector<int>> dp(s.size(),vector<int>(p.size(),2));
        return solve(s,p,s.size()-1,p.size()-1,dp);
    }
};