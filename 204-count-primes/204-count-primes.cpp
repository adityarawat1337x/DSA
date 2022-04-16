class Solution {
public:
    int seive[5000001];
    int countPrimes(int n) {
        memset(seive,1,sizeof(seive));
        seive[2]=1;
        int ans=0;
        for(int i=2;i<n;i++){
            if(seive[i]==0)
                continue;
            ans++;
            for(int j=2*i;j<=n;j+=i){
                seive[j]=0;
            }
        }
        return ans;
    }
};