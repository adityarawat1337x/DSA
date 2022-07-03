class Solution {
public:
    int findComplement(int num) {
        int mask=0,cnt=0,ans=0;
        while(num){
            bool bit = num&1;
            mask = bit?0:1<<cnt;
            ans = ans|mask;
            num=num>>1;
            cnt++;
        }
        return ans;
    }
};