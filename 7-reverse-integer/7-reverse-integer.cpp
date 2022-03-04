class Solution {
public:
    int reverse(int x) {
        bool neg=false;
        if(x<0)
            neg=true;
        if(x==INT_MAX or x==INT_MIN)
            return 0;
        x=abs(x);
        
        int ans=0;
        while(x){
            if(ans>INT_MAX/10)
                return 0;
            ans*=10;
            ans+=(x%10);
            x/=10;
        }
        if(neg)
            ans=-ans;
       
        return ans;
    }
};