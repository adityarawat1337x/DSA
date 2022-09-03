class Solution {
public:
    vector<int> ans;
    int dig;
    void solve(long x,int k,int n){
        if(dig==n){
            ans.push_back(x);
        }
        if(dig<n)
            return;
        
        
        int next = (x%10)+k,next2=(x%10)-k;
        if(next<10 and next>-1)
            solve(x*10 + next,k,n+1);
        if(next2<10 and next2>-1 and next!=next2)
            solve(x*10 + next2,k,n+1);
    }
    
    vector<int> numsSameConsecDiff(int n, int k) {
        dig=n;
        for(long i=1;i<10;i++) solve(i,k,1);
        return ans;
    }
};