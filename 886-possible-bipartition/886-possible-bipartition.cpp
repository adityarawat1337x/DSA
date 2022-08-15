class Solution {
public:
    bool isbipartite(vector<int> adj[],vector<int> &color,int &node){
        queue<int> q;
        q.push(node);
        color[node]=1;
        while(!q.empty()){
            int x = q.front();
            q.pop();
            
            for(auto next:adj[x]){
                if(!color[next]){
                    color[next]=-color[x];
                    q.push(next);
                }else{
                    if(color[next]==color[x])
                        return false;
                }
            }
        }
        
        return true;
    }
    
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<int> color(n+1,0);
        vector<int> adj[n+1];
        for(auto &e:dislikes){
           adj[e[0]].push_back(e[1]);
           adj[e[1]].push_back(e[0]);
        }
        for(int i=1;i<=n;i++)
           if(!color[i] and !isbipartite(adj,color,i)){
                return false;
            };
        return true;
    }
};