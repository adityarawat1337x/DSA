class Solution {
public:
      int run(vector<vector<int>>& og,int i,int j,int k,int l,vector<vector<vector<vector<long>>>> &dp){
        if(i==og.size() or j==og[0].size() or k==og.size() or l==og[0].size()  or og[k][l]<0 or og[i][j]<0)
            return -1e8;
          
        if(i==og.size()-1 and j==og[0].size()-1)
            return og[i][j];
          
        if(k==og.size()-1 and l==og[0].size()-1)
            return og[i][j];
        
        if(dp[i][j][k][l]>INT_MIN)
            return dp[i][j][k][l];
        
        long ans=0;
          
        if(i==k and j==l){
            ans+=og[i][j];
        }else{
            ans+=og[i][j] + og[k][l];
        }
        
        ans+=max({
            run(og,i,j+1,k,l+1,dp),
            run(og,i,j+1,k+1,l,dp),
            run(og,i+1,j,k,l+1,dp),
            run(og,i+1,j,k+1,l,dp),
        });
         
        return dp[i][j][k][l] = ans;
        
    }
    
    int cherryPickup(vector<vector<int>>& og) {
        vector<vector<vector<vector<long>>>> dp
            (og.size(),vector<vector<vector<long>>>(og[0].size(),vector<vector<long>>(og.size(),vector<long>(og[0].size(),INT_MIN))));
        int ans = run(og,0,0,0,0,dp);
        return ans<0?0:ans;
    }
};