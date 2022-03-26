class Solution {
public:
    int solve(int idx,unordered_map<string,char> &mp,string &s,vector<int> &dp){
        if(idx>=s.size())
            return 1;
        if(dp[idx]!=-1)
            return dp[idx];
        int ans=0;
        string pat="";
        if(mp.find(pat+s[idx])!=mp.end())
            ans+=solve(idx+1,mp,s,dp);
        
        if(idx<s.size()-1 and mp.find(pat+s[idx]+s[idx+1])!=mp.end())
            ans+=solve(idx+2,mp,s,dp);
        
        return dp[idx]  = ans;
    }
    
    int numDecodings(string s) {
        unordered_map<string,char> mp;
        mp["1"]='A';
        mp["2"]='B';
        mp["3"]='C';
        mp["4"]='D';
        mp["5"]='E';
        mp["6"]='F';
        mp["7"]='G';
        mp["8"]='H';
        mp["9"]='I';
        mp["10"]='J';
        mp["11"]='K';
        mp["12"]='L';
        mp["13"]='M';
        mp["14"]='N';
        mp["15"]='O';
        mp["16"]='P';
        mp["17"]='Q';
        mp["18"]='R';
        mp["19"]='S';
        mp["20"]='T';
        mp["21"]='U';
        mp["22"]='V';
        mp["23"]='W';
        mp["24"]='X';
        mp["25"]='Y';
        mp["26"]='Z';
        vector<int> dp(s.size(),-1);
        return solve(0,mp,s,dp);
    }
};