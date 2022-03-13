class Solution {
public:
    int fib(int n) {
        int prev=1,curr=1;
        if(n==0)
            return 0;
        if(n<=2)
            return curr;
        
        for(int i=3;i<=n;i++){
            int tmp = curr + prev;
            prev=curr;
            curr=tmp;
        }
        
        return curr;
    }
};