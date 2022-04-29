class Solution {
public:
    bool dfs(vector<vector<int>>& graph,vector<int> &color,int node){
        for(int i=0;i<graph[node].size();i++){
            if(color[graph[node][i]]==color[node])
                return false;
            else if(color[graph[node][i]]==-1){
                color[graph[node][i]] = 1-color[node];
                if(!dfs(graph,color,graph[node][i]))
                    return false;
            }
        }
        
        return true;        
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        queue<int> q;
        vector<int> color(graph.size(),-1);
        
        for(int i=0;i<graph.size();i++)
            if(color[i]==-1){
                color[i]=1;
                if(!dfs(graph,color,i))
                    return false;
            }
        return true;
    }
};