class Solution {
public:
    bool solve(string s,int l,int r,int ctr){
        if(ctr>1)
            return false;
        
        while(l<r){
            if(s[l]!=s[r]){
                return solve(s,l,r-1,ctr+1) or solve(s,l+1,r,ctr+1);
            }
            l++;
            r--;
        }
        
        return true;
    }
    
    bool validPalindrome(string s) {
        int l=0,r=s.size()-1;
        int ctr=0;
        return solve(s,l,r,ctr);
    }
};