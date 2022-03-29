class Solution {
public:
 
    string longestPalindrome(string s) {
        int len=1;
        vector<vector<bool>> dp(s.size()+1,vector<bool>(s.size()+1,false));
        int minl=0;
        
        for(int i=0;i<s.size();i++)
                dp[i][i]=true;
        
        for(int i=0;i<s.size()-1;i++)
                if(s[i]==s[i+1]){
                    dp[i][i+1]=true;
                    minl=i;
                    len=2;
                }
            
        
       for(int i=s.size()-1;i>-1;i--)
            for(int j=i;j<s.size();j++){
                if(s[i]==s[j] and j>0 and dp[i+1][j-1]){
                    dp[i][j]=true;
                    if(j-i+1 > len){
                        cout<<i<<" : "<<j<<" , "<<len<<"\n";
                        minl=i;
                        len=j-i+1;
                    }
                }
            }
        
        return s.substr(minl,len);
    }
};