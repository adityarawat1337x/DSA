class Solution {
public:
    
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<pair<int,int>> wt;
        for(auto i:strs){
            int zer=0,on=0;
            for(auto j:i)
                if(j=='0')
                    zer++;
                else
                    on++;
            wt.push_back({zer,on});
            //cout<<wt.back().first<<" "<<wt.back().second<<"\n";
        }
        
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        for(auto w:wt){
            int z=w.first,o=w.second;
            for(int i=m;i>=z;i--){
                for(int j=n;j>=o;j--){
                    dp[i][j] = max(1 + dp[i-z][j-o],dp[i][j]);
                }
            }
        }
        return dp.back().back();
    }
};