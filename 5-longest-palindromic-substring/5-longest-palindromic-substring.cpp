class Solution {
public:
 
    string longestPalindrome(string s) {
        int len=1;
        string ans=s.substr(0,len);
        for(int i=0;i<s.size();){
            int l=i,r=i;

            while(r<s.size()-1 and s[r]==s[r+1]){
                r++;
            }
            i=r+1;
            
            while(l>0 and r<s.size()-1 and (s[l-1]==s[r+1])){
                l--;
                r++;
            }
            
            if(r-l+1>len){
                len=r-l+1;
                ans = s.substr(l,len);
            }
           
        }
        return ans;
    }
};