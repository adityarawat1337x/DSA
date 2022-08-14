class Solution {
public:
    unordered_map<char,char> par;
    char find(char x){
        char y=x;
        while(y!=par[y])
            y=par[y];
        return par[x]=y;
    }
    
    void Union(char a, char b){
        a=find(a),b=find(b);
        par[a]=b;
    }
    
    bool equationsPossible(vector<string>& eq) {
        for(char c='a';c<='z';c++)
            par[c]=c;
        
        for(auto &s:eq){
            char a=s[0],b=s[3],c=s[1];
            if(s[1]=='='){
                Union(a,b);
            }else{
                a=find(a),b=find(b);
                if(a==b)
                    return false;
            }
        }
        reverse(eq.begin(),eq.end());
        
        for(auto &s:eq){
            char a=s[0],b=s[3],c=s[1];
            if(s[1]=='='){
                Union(a,b);
            }else{
                a=find(a),b=find(b);
                if(a==b)
                    return false;
            }
        }
        
        return true;
    }
};