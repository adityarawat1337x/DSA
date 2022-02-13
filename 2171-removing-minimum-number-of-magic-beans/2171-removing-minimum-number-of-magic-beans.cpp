class Solution {
public:

    long long minimumRemoval(vector<int>& b) {
        vector<long long> presum;
        long long  n=b.size(),sm=0;
        sort(b.begin(),b.end());
        for(int i=0;i<n;i++){
            presum.push_back(sm);
            sm+=b[i];
        }
        long long ans=LONG_MAX,sufsum=0;
        
        for(int i=n-1;i>-1;i--){
            sufsum+=b[i];
            long long  subans = presum[i]-(long long)(b[i]*(n-i))+(long long)sufsum;
            ans = min(ans,subans);
        }
        
        return ans;
    }
};