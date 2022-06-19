class Solution {
public:

    int integerReplacement(int n) {
        long long num=n;
        int ans=0;
        while(num!=1){
            if(num&1){
                long long sub = __builtin_popcountll(num);
                long long add = __builtin_popcountll(num+1);
                if(add<sub and num!=3)
                    num++;
                else
                    num--;
            }else
                num=num>>1;
            ans++;
        }
        return ans;
    }
};