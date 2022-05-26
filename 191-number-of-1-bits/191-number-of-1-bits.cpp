class Solution {
public:
    int rsb(uint32_t &n){
        return n&-n;
    }
    int hammingWeight(uint32_t n) {
        int cnt=0;
        while(n){
            n-=rsb(n);
            cnt++;
        }
        return cnt;
    }
};