class Solution {
    long d=256,q=101,p=0,h=1;
public:
    bool check(string &pat,string &txt,int i){
        if(i-1+pat.length()>txt.length())
            return false;
        
        for(int k=0;k<pat.length();k++,i++){
            if(pat[k]!=txt[i])
                return false;
        }
        return true;
    }
    
    bool match(string pat,string txt){
        long t=0;
        int m=pat.length(),n=txt.length();
        
        //hash for first window
        for(int i=0;i<m;i++){
            t=(d*t+txt[i])%q;
        }
        
        for(int i=0;i<=n-m;i++){
            if(p==t){
                if(check(pat,txt,i))
                    return true;
            }
            if(i<n-m){
                t = (d*(t - txt[i]*h) + txt[i+m])%q;
                if(t<0)
                    t+=q;
            }
        }
        
        return false;
    }
    
    int repeatedStringMatch(string a, string b) {
        int cnt=1;
        if(b=="" )
            return 0;
        
        if(a=="" and b!="")
            return -1;
        else if(a=="" and b=="")
            return 0;
        
        int m=b.length();
        for(int i=0;i<m-1;i++)
                h = (h * d) % q;
        
        for(int i=0;i<m;i++){
                p=(d*p+b[i])%q;
        }
        
        string tmp=a;
        
         while(a.size() <b.size()){
            cnt++;
            a+=tmp;
        }
        
      if(match(b,a))
            return cnt;
        a+=tmp;
        if(match(b,a))
            return cnt+1;
        return -1;
    }
};