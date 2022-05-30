class Solution {
public:
    int divide(int dividend, int divisor) {
        
        long long cnt=0,div=abs(divisor);
        bool neg=false;
        
        if(divisor<0)
            neg=!neg;
        if(dividend<0)
            neg=!neg;
        
        long long divd=abs(dividend);
        long long divv=abs(divisor);
        
        if(divv==1){
            return neg?max((long long)INT_MIN,-divd):min((long long)INT_MAX,divd);
        }
        int i=0;
        while(divd>=(divv<<1)){
            cnt+=(1<<i);
            divv=divv<<1;
            i++;
        }
        while(divd>=divv){
            cnt++;
            divv+=div;
        }
        
        return neg?max((long long)INT_MIN,-cnt):min((long long)INT_MAX,cnt);
    }
};