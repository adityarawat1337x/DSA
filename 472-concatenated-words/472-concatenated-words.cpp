class Solution {
public:
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        unordered_set<string> mp;
        sort(words.begin(),words.end(),[&](auto a,auto b){
            if(a.size()==b.size())
                return a<b;
            return a.size()<b.size();
        });
        
        vector<string> ans;
        
        for(auto s:words){
            vector<bool> dp(s.size()+1,0);
            dp[0]=1;
            for(int i=1;i<=s.size();i++)
                for(int j=0;j<=i;j++)
                    if(dp[j] and mp.count(s.substr(j,i-j))){
                        dp[i]=dp[j];
                        break;
                    }
            if(dp.size()>1 and dp.back())
                ans.push_back(s);
            if(s.size())
                mp.insert(s);
        }
        return ans;
    }
};