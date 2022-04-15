class Solution {
public:
    int titleToNumber(string ct) {
        long long ans=0,pow=1;
        for(int i=ct.size()-1;i>-1;i--){
            ans += pow*(ct[i]-'A'+1);
            pow*=26;
        }
        return ans;
    }
};