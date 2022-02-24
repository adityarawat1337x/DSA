class Solution {
public:
    
    void dfs( vector<bool> &vis,vector<vector<int>> &gp,int i){
        if(vis[i])
            return;
        vis[i]=true;
        
        for(auto x:gp[i]){
            dfs(vis,gp,x);
        }
        
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {        vector<vector<int>> gp(n);
                                                                                            for(auto i:edges){                                                                      gp[i[0]].push_back(i[1]);                                                          gp[i[1]].push_back(i[0]);                                                      }
         vector<bool> vis(n,false);
         dfs(vis,gp,source);
                                                                                           return vis[destination];
    }
};