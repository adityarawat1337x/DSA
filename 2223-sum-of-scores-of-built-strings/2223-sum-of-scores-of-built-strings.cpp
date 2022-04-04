class Solution {
public:
    long long sumScores(string s) {
        vector<long long> z(s.size(),0);
        long long n=s.size();
        
        for(long long i=1,l=0,r=0;i<n;i++){
            if(i<=r){
                z[i]=min(z[i-l],r-i+1);
            }
            
            while(z[i]+i<n and s[z[i]]==s[z[i]+i])
                z[i]++;
            
            if (i + z[i] - 1 > r)
                l = i, r = i + z[i] - 1;
        }
        
        return n+accumulate(z.begin(),z.end(),(long long)0);
    }
};