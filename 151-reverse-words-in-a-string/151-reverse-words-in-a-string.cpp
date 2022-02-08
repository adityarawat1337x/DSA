class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string tmp="";
        int start=0,end=s.size()-1;
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
                v.push_back(tmp);
                tmp="";
            }
            else{
                tmp+=s[i];
            }
        }
        v.push_back(tmp);
        
        string ans;
        while(v.size()){
            ans+=v.back();
            ans+=' ';
            v.pop_back();
        }
        
        ans=ans.substr(0,ans.size()-1);
        return ans;
    }
};