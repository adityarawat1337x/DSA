class Solution {
public:
    bool dfs(vector<vector<int>>& graph,vector<int> &color,int node){
        if(color[node]==-1)
            color[node]=1;

        for(int i:graph[node]){
            if(color[i]==-1){
                color[i]=1-color[node];
                if(!dfs(graph,color,i))
                    return false;
            }else if(color[i]==color[node])
                return false;
        }
        
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        queue<int> q;
        vector<int> color(graph.size(),-1);
        
        for(int i=0;i<graph.size();i++)
            if(color[i]==-1)
                if(!dfs(graph,color,i))
                    return false;
        return true;
    }
};