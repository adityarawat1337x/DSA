class Solution {
    public:
    int minimumDistance(string word) {
        vector<int> dp(26);
        int ans=0,save=0;
        
        for(int i=0;i<word.size()-1;i++){
            int right=word[i]-'A',next=word[i+1]-'A';
            for(int left=0;left<26;left++){
                dp[right]=max(dp[right],dp[left]+d(right,next)-d(left,next));
            }
            save = max(save,dp[right]);
            ans+=d(right,next);
        }
        return ans-save;
    }
                              
    int d(int a, int b) {
        return abs(a / 6 - b / 6) + abs(a % 6 - b % 6);
    }
};