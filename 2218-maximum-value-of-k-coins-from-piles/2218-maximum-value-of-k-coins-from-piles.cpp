class Solution {
public:
    long long solve(vector<vector<int>>& piles,int idx,int k,vector<vector<long long>> &memo){
        if(k==0 or idx>=piles.size())
            return 0;

        if(memo[idx][k]!=-1)
            return memo[idx][k];
        long long ans=0;
        long long take=0;
        
        for(int j=0;j<piles[idx].size() and j<k;j++){
            take += piles[idx][j];
            ans = max(ans,take + solve(piles,idx+1,k-(j+1),memo));
        }
        
        ans = max(ans,solve(piles,idx+1,k,memo));
        return memo[idx][k] = ans;
    }
    
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        long long ans=INT_MIN;
 
        vector<vector<long long>> memo(piles.size(),vector<long long>(k+1,-1));
        
        return solve(piles,0,k,memo);
    }
};