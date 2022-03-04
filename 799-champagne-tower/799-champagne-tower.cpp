class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        float dp[query_row+1][query_glass+2];
        memset(dp,0,sizeof(dp));
        dp[0][0]=poured;
        for(int i=0;i<query_row;i++){
            for(int j=0;j<=query_glass;j++){
                if(dp[i][j]>1){
                    dp[i+1][j]+=(dp[i][j]-1)/2.0;
                    dp[i+1][j+1]+=(dp[i][j]-1)/2.0;
                    dp[i][j]=1;
                }
            }
        }
        float a =1;
        return min(a,dp[query_row][query_glass]);
    }
};