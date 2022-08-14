class Solution {
public:
    int par[26];
    int find(int x){
        int y=x;
        while(y!=par[y])
            y=par[y];
        return par[x]=y;
    }
    
    void Union(int a, int b){
        a=find(a),b=find(b);
        par[a]=b;
    }
    
    bool equationsPossible(vector<string>& eq) {
        for(char c='a';c<='z';c++)
            par[c-'a']=c-'a';
        
        for(auto &s:eq){
            char a=s[0],b=s[3],c=s[1];
            if(c=='='){
                Union(a-'a',b-'a');
            }else{
                int x=find(a-'a'),y=find(b-'a');
                if(x==y)
                    return false;
            }
        }
        
        reverse(eq.begin(),eq.end());
        
         for(auto &s:eq){
            char a=s[0],b=s[3],c=s[1];
            if(c=='='){
                Union(a-'a',b-'a');
            }else{
                int x=find(a-'a'),y=find(b-'a');
                if(x==y)
                    return false;
            }
        }
        return true;
    }
};