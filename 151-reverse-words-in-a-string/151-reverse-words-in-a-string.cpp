class Solution {
public:
    string reverseWords(string s) {
        int start=0,end=s.size()-1;
        string ans,tmp;
        while(start<=end and s[start]==' '){
            start++;
        }
        
        while(end>-1 and s[end]==' '){
            end--;
        }
        
        s = s.substr(start,end-start+1);
        
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                while(i<s.size() and s[i]==' ')
                    i++;
                i--;
                ans = tmp + ' ' + ans;
                tmp="";
            }
            else{
                tmp+=s[i];
            }
        }
        ans = tmp + ' ' + ans;
        
        return ans.substr(0,ans.size()-1);
    }
};