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
    int mirrorReflection(int p, int q) {
        return solve(p,0,q,1,1);
    }
};