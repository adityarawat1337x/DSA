class Solution {
public:
    int arrangeCoins(int n) {
        //binary seacrh the answer
        long long l=1,r=n,m,s;
        while(l<=r){
             m = (l+r)>>1;
             s = (m*(m+1))/2;
            if(s==n)
                return m;
            if(s<n)
                l=m+1;
            else
                r=m-1;
        }
        return r;
    }
};