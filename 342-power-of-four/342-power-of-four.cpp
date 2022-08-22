class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return 0;
        int x = sqrt(n);
        if(x*x!=n)
            return 0;
        return !(x&(x-1));
    }
};