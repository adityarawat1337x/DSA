class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int cntOnes=0,cntZeros=0;
        int ans=INT_MAX;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0')
                cntZeros++;
        }
        
         for(int i=0;i<s.size();i++){
            if(s[i]=='0')
                cntZeros--;
            ans = min((cntZeros+cntOnes),ans);
            if(s[i]=='1')
                cntOnes++;
        }
        return ans;
    }
};