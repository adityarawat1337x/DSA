class Solution {
public:
    vector<vector<int>> gp;
    
    void dfs(int node,int parent,vector<int> &vis,vector<int> &low,vector<int> &time,vector<vector<int>> &ans,int timer){
        vis[node]=1;
        low[node]=time[node]=timer++;
        
        for(auto child:gp[node]){
            if(child==parent)
                continue;
            if(!vis[child]){
                dfs(child,node,vis,low,time,ans,timer);
                low[node] = min(low[node],low[child]);
                if(low[child] > time[node])
                    ans.push_back({child,node});
                
            }else{
                low[node] = min(time[child],low[node]);
            }
        }
        
    }
    
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        //find bridges in graph
        gp.resize(n);
        
        for(auto edge:connections){
            gp[edge[0]].push_back(edge[1]);
            gp[edge[1]].push_back(edge[0]);
        }
        
        vector<int> low(n,-1),vis(n),time(n,-1);
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i,-1,vis,low,time,ans,0);
            }
        }
        
        return ans;
    }
};