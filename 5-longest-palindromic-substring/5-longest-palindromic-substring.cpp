class Solution {
public:
 
    string longestPalindrome(string s) {
        int len=1;
        string ans=s.substr(0,len);
        for(int i=0;i<s.size();i++){
            int l=i-1,r=i+1;
            while(l>-1 and s[l]==s[l+1])
                l--;
            while(r<s.size() and s[r]==s[r-1]){
                r++;
            }
            while(l>-1 and r<s.size() and (s[l]==s[r])){
                l--;
                r++;
            }
          
            if(r-l-1>len){
                len=r-l-1;
                ans = s.substr(l+1,len);
            }
        }
        return ans;
    }
};