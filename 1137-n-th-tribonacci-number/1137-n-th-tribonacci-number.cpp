class Solution {
public:
    int tribonacci(int n) {
        if(n==0)
            return 0;
        if(n<=2)
            return 1;
        int curr=1,prev=1,prev2=0;
        for(int i=3;i<=n;i++){
            int tmp = curr+prev+prev2;
            prev2=prev;
            prev=curr;
            curr=tmp;
        }
        return curr;
    }
};