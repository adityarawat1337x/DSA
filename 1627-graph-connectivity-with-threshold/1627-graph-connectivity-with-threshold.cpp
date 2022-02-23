class Solution {
    vector<int> rank,parent;
    
public:
    void un(int u,int v){
        u = find(u);
        v = find(v);
        if(rank[u]>rank[v]){
            parent[v]=u;
            rank[u]++;
        }else{
            parent[u]=v;
            rank[v]++;
        }
    }
    
    int find(int child){
        if(child==parent[child])
            return child;
        return parent[child] = find(parent[child]);
    }
     
    vector<bool> areConnected(int n, int k, vector<vector<int>>& queries) {
          parent.resize(n+1); rank.resize(n+1);
        for(int i=0;i<=n;i++){
            rank[i]=0;
            parent[i]=i;
        }
        
       for (int u = k + 1; u <= n; u++){
            for (int v = u * 2; v <= n; v += u) {
          
                if (u!=v){
                    un(u,v);
                }
            }
        }
      
       
     vector<bool> ans;
        
      for(auto node : queries){
            ans.push_back(find(node[0])==find(node[1]));
      }
        
        return ans;
    }
};






















