class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        long res=0;
        long tmp=x;
        while(tmp){
            res*=10;
            res+=tmp%10;
            tmp/=10;
        }
        return res==x;
    }
};