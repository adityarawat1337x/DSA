class Solution {
public:
  int countBinarySubstrings(string s) {
        ios::sync_with_stdio(false); 
        cin.tie(nullptr);
        cout.tie(nullptr);        

        int start = 0, i=1, e=s.size(), prevLen=0, ans = 0;
        while (i < e){
            if (s[i] != s[i-1]){
                ans += min(prevLen, i - start);
                prevLen = i - start;
                start = i;
            }
            ++i;
        }
        ans += min(prevLen, i-start);
        return ans;
    }
};