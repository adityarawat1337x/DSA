class Solution {
public:
    vector<int> cycle;
    int dfs(int node,vector<vector<int>> &graph,vector<int> &vis){
        vis[node]=1;
        for(auto &next:graph[node]){
            if(cycle[next]==-1)
                continue;
            if(cycle[next]==1 or vis[next] or dfs(next,graph,vis)==1){
                cycle[node]=1;
                vis[node]=0;
                return cycle[node];
            }
        }
        vis[node]=0;
        return cycle[node]=-1;
    }
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int> dfsVis(graph.size()),ans;
        cycle.resize(graph.size());
        for(int i=0;i<graph.size();i++){
            if(!cycle[i])
                dfs(i,graph,dfsVis);
        }
        for(int i=0;i<cycle.size();i++)
            if(cycle[i]==-1)
                ans.push_back(i);
        return ans;
    }
};