class Solution {
public:
    vector<set<int>> ans;
    
    set<int> dfs(int node,vector<int> adj[]){
        set<int> tmp;
        
        if(ans[node].size()){
            tmp=ans[node];
            tmp.insert(node);
            return tmp;
        }
        for(auto &next:adj[node]){
            auto x = dfs(next,adj);
            tmp.insert(x.begin(),x.end());
        }
        
        ans[node]=tmp;
        tmp.insert(node);
        return tmp;
        
    }
    
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<int> adj[n];
        ans.resize(n);
        
        for(auto &e:edges){
            adj[e[1]].push_back(e[0]);
        }
        
        for(int i=0;i<n;i++){
            dfs(i,adj);
        }
        
        vector<vector<int>> res(n);
        
        for(int i=0;i<n;i++){
            for(auto &x:ans[i])
                res[i].push_back(x);
        }
        return res;
    }
};