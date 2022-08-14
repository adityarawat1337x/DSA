class Solution {
public:
    vector<int> par;
    int cnt=0;
    int find(int x){
        int y=x;
        while(par[x]!=x)
            x=par[x];
        return par[y]=x;
    }
    
    void Union(int a,int b){
        a=find(a),b=find(b);
        if(a!=b)cnt--;
        par[a]=b;
    }
    
    int makeConnected(int n, vector<vector<int>>& connections) {
        int edges = connections.size(); 
        cnt=n;
        if(edges<n-1)
            return -1;
        
        par.resize(n);
        
        for(int i=0;i<n;i++)
            par[i]=i;
       
        
        for(auto &i:connections){
            Union(i[0],i[1]);
        }
        
        return cnt-1;
    }
};