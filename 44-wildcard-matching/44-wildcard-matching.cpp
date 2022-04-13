class Solution {
public:
    bool solve(string &s,string &p,int idxS,int idxP,vector<vector<int>> &dp){
        if(idxS==s.size() and idxP==p.size())
            return true;
        
        if(idxS==s.size()){
            for(int i=idxP;i<p.size();i++)
                if(p[i]!='*')
                    return false;
            
            return true;
        }
        
        if(idxP>=p.size())
            return false;
        
        if(dp[idxS][idxP]!=-1)
            return dp[idxS][idxP];
        
        if(s[idxS]==p[idxP] or p[idxP]=='?'){
            return dp[idxS][idxP] = solve(s,p,idxS+1,idxP+1,dp);
        }
        
        if(p[idxP]=='*')
            return  dp[idxS][idxP] = solve(s,p,idxS+1,idxP+1,dp) or solve(s,p,idxS+1,idxP,dp) or solve(s,p,idxS,idxP+1,dp); 
        
        return  dp[idxS][idxP] = false;
    }    
    
    bool isMatch(string s, string p) {
       
        vector<vector<int>> dp(s.size()+1,vector<int>(p.size()+1,-1));
        return solve(s,p,0,0,dp);
        //return dp.back().back();
    }
};