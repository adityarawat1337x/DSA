class Solution {
public:
    long long solve(long long n){
        if(n==1)
            return 0;
        if(n%2==0)
            return 1+solve(n/2);
        return 2+min(solve((n+1)/2),solve((n-1)/2));
    }
    int integerReplacement(int n) {
        return solve(n);
    }
};