class Solution {
public:
    bool bfs(vector<vector<int>>& graph,vector<int> &color,int node){
        queue<int> q;
        q.push(node);
        color[node]=0;
        
        while(!q.empty()){
            int x = q.front();
            q.pop();
            
            for(int i:graph[x]){
                if(color[i]==-1){
                    color[i]=1-color[x];
                    q.push(i);
                }else if(color[i]==color[x])
                    return false;
            }
        }
        
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        queue<int> q;
        vector<int> color(graph.size(),-1);
        
        for(int i=0;i<graph.size();i++)
            if(color[i]==-1)
                if(!bfs(graph,color,i))
                    return false;
        return true;
    }
};