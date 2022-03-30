class Solution {
public:

    long long wonderfulSubstrings(string word) {
        long long ans=0,mask=0;
        vector<int> cnt(pow(2,11)+1);
        cnt[0]=1;
        for(int i=0;i<word.size();i++){
            int idx = word[i]-'a';
            mask^=(1<<idx);
            
            //even times
            ans+=cnt[mask];
            
            for(int j=0;j<10;j++){
                ans += cnt[mask^(1<<j)];
            }
            cnt[mask]++;
        }
        
        return ans;
    }
};