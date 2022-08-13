class Solution {
public:
    vector<int> parent;
    vector<int> rank;
    int n;
    
    int findParent(int x){
        if(parent[x]!=x)
            return parent[x]=findParent(parent[x]);
        return x;
    }
    
    void Union(int i,int j){
        int x = findParent(i),  y = findParent(j);
        if(rank[x]>rank[y])
            parent[y]=x;
        else if(rank[y]>rank[x])
            parent[x]=y;
        else {
            parent[x]=y;
            rank[y]++;
        }
    }
    
    
    vector<int> findRedundantConnection(vector<vector<int>>& grid) {
        parent.resize(grid.size());
        rank.resize(grid.size());
        int cnt=0;
        n=grid.size();
        for(int i=0;i<n;i++){
            rank[i]=0;
            parent[i]=i;
        }
        
        for(auto &e:grid){
            if(findParent(e[0]-1)==findParent(e[1]-1))
                return e;
            Union(e[0]-1,e[1]-1);
        }    
        
        return {-1,-1};
    }
};