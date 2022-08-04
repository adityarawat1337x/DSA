class Solution {
public:
    int solve(int len,int gone,int ray,bool right,bool up){
        gone+=ray;
        if(gone==len){
            if(right and up)
                return 1;
            if(!right and up)
                return 2;
            else return 0;
        }
        
        if(gone>len)
            return solve(len,gone-len,ray,right,!up);
        return solve(len,gone,ray,!right,up);
    }
    int gcd(int a,int b){
        while(b){
            a=a%b;
            swap(a,b);
        }
        return a;
    }
    int mirrorReflection(int p, int q) {
        int x = (p*q)/gcd(p,q);
        int m = x/p,n=x/q;
        if(!(m&1))
            return 0;
        if(n&1)
            return 1;
        return 2;
    }
};