class Solution {
public:
    int longestValidParentheses(string s) {
        if (s.size() == 0) return 0;
        int sum = 0, res = 0, len = 0, n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') sum++;
            else sum--;
            if (sum < 0) {
                sum = 0;
                len = 0;
            } else {
                len++;
                if (sum == 0) res = max(res, len);
            }
        }
        sum = 0;
        len = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == ')') sum++;
            else sum--;
            if (sum < 0) {
                sum = 0;
                len = 0;
            } else {
                len++;
                if (sum == 0) res = max(res, len);
            }
        }
        return res;
    }
};