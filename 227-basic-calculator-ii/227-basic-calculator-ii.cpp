class Solution {
public:
    int calculate(string s) {
        if(!s.size())
            return 0;
        int i=0,res=0,preval=0,curr=0;
        stack<string> st;
        string tmp="";
        char sign='+';
        while(i<s.size()){
            while(i<s.size() and s[i]==' ')i++;
            while(i<s.size() and s[i]>='0' and s[i]<='9')
                tmp+=s[i++];
            while(i<s.size() and s[i]==' ')i++;
            
            int curr = 0;
            if(tmp!="")
                curr=stoi(tmp);
            cout<<curr<<" ";            
            if(sign=='+'){
                res+=preval;
                preval=curr;
            }
            else if(sign=='-'){
                res+=preval;
                preval=-curr;
            }else if(sign=='*'){
                preval*=curr;
            }else{
                preval/=curr;
            }
            if(i<s.size()){
                sign=s[i];
            }
            i++;
            tmp="";
        }
        res+=preval;
        return res;
    }
};