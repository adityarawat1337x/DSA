class Solution {
public:
    int reverse(int x) {
        bool neg=false;
        if(x<0)
            neg=true;
        x=abs(x);
        long ans=0;
        while(x){
            ans*=10;
            ans+=(x%10);
            x/=10;
        }
        if(neg)
            ans=-ans;
        
        if(ans<INT_MIN or ans>INT_MAX)
            return 0;
        return ans;
    }
};