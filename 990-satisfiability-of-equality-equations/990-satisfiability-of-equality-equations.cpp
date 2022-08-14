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
        for(int i=0;i<26;i++)
            par[i]=i;
        
        for(auto &s:eq){
            int a=s[0]-'a',b=s[3]-'a';
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
            int a=s[0]-'a',b=s[3]-'a';
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