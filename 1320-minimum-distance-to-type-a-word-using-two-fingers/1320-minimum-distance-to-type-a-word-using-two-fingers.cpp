class Solution {
    public:
    int move(int source, int target){
        if(source == 26) return 0;
        int y = source / 6;
        int x = source % 6;
        int y2 = target / 6;
        int x2 = target % 6;
        return abs(y2-y) + abs(x2-x);
    }
    
    int minimumDistance(string word) {
        int dp[word.size()+1][27][27];
        memset(dp,0,sizeof dp);
        for(int i=word.size()-1;i>-1;i--){
            for(int j=0;j<27;j++){
                for(int k=0;k<27;k++){
                    int f1move = move(j,word[i]-'A');
                    int f2move = move(k,word[i]-'A');
                    dp[i][j][k] = min(dp[i+1][word[i] - 'A'][k] + f1move,dp[i+1][j][word[i] - 'A'] + f2move);
                }
            }  
        }

        return dp[0][26][26];
    }
};