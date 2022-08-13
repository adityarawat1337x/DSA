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
    
    int findCircleNum(vector<vector<int>>& grid) {
        parent.resize(grid.size());
        rank.resize(grid.size());
        int cnt=0;
        n=grid[0].size();
        for(int i=0;i<grid.size();i++){
            rank[i]=0;
            parent[i]=i;
        }
               
         for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[0].size();j++)
                if(grid[i][j])
                    Union(i,j);
        
        int ans=0;
        for(int j=0;j<grid[0].size();j++)
            if(parent[j]==j)
                ans++;
        
        return ans;
    }
};