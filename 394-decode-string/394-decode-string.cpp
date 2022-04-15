class Solution {
public:
    string decodeString(string s) {
        string str="";
        string ans="";
        int n =0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='['){
                int n = str==""?1:stoi(str);
                str="";
                int flag=1;
                i++;
                while(i<s.size() and flag!=0){
                    if(s[i]=='[')
                        flag++;
                    else if(s[i]==']')
                        flag--;
                    str+=s[i];
                    i++;
                }
                string tmp = decodeString(str);
                while(n--){
                    ans+=tmp;
                }
                str="";
                n=0;
                i--;
            }else if(s[i]>='0' and s[i]<='9'){
                str+=s[i];
            }else if(s[i]>='a' and s[i]<='z'){
                ans+=s[i];
            }
        }
        return ans;
    }
};