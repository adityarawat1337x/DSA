class Solution {
public:
    bool isCycle(vector<int> vis,vector<int> &dfsvis,vector<vector<int>> &graph,int k){
        if(vis[k])
            return true;
        vis[k]=true;
        if(!dfsvis[k])
            for(auto i:graph[k]){
                if( isCycle(vis,dfsvis,graph,i))
                    return true;
            }
        dfsvis[k]=true;
        return false;
    }
    
    bool canFinish(int n, vector<vector<int>>& pre) {
       if(!pre.size())
           return true;
        vector<vector<int>> graph(n);
        for(auto i:pre){
            graph[i[0]].push_back(i[1]);
        }
        
        vector<int> vis(n,false);
        vector<int> dfsvis(n,false);
        
        for (int i = 0; i < n; i++){
            if (graph[i].size()){
                if(isCycle(vis,dfsvis,graph,i)){
                cout<<i;
                    return false;
                }
            }
        }
    
        return true;
                
    }
};