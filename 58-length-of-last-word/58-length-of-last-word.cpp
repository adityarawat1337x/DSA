class Solution {
public:
    int lengthOfLastWord(string s) {
        string str="";
        for(int i=s.size()-1;i>-1;i--){
            if(s[i]==' ' and str.size()>0)
                break;
            if(s[i]!=' ')
                str.push_back(s[i]);
        }
        
        return str.size();        
    }
};