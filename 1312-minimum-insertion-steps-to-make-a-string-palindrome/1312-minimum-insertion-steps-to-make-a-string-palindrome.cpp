class Solution {
public:
    int minInsertions(string s) {
        string t = s;
        reverse(t.begin(),t.end());
        vector<vector<int>> lcs(s.size()+1,vector<int>(s.size()+1,0));
        
        for(int i=1;i<=s.size();i++)
            for(int j=1;j<=t.size();j++){
                if(s[i-1]==t[j-1]){
                    lcs[i][j]=1+lcs[i-1][j-1];
                }else{
                    lcs[i][j] = max(lcs[i-1][j],lcs[i][j-1]);
                }
            }
            
        return s.length() - lcs.back().back();
    }
};