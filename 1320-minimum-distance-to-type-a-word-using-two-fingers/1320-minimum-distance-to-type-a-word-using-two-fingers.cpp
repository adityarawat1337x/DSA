class Solution {
    public:
   int dp[27][27][301] = {[0 ... 26][0 ... 26][0 ... 300] = -1};
    int cost(char from, char to) {
        return from == 26 ? 0 : abs(from / 6 - to / 6) + abs(from % 6 - to % 6);
    }
    
    int minimumDistance(string &word, int pos = 0, char left = 26, char right = 26) {
        if (pos >= word.size()) return 0;
        if (dp[left][right][pos] == -1) {
            auto to = word[pos] - 'A';
            dp[left][right][pos] = min(cost(left, to) + minimumDistance(word, pos + 1, to, right),
                cost(right, to) + minimumDistance(word, pos + 1, left, to));
        }
        return dp[left][right][pos];
    }
};