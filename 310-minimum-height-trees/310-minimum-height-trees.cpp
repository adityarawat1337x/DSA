class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(!edges.size())
            return {0};
        vector<int> indeg(n,0);
        vector<int> adj[n],ans;
        queue<int> q;
        
        for(auto &it:edges){
            auto a=it[0],b=it[1];
            adj[a].push_back(b);
            adj[b].push_back(a);
            indeg[a]++,indeg[b]++;
        }
        
        for(int i=0;i<indeg.size();i++){
            if(indeg[i]==1){
                q.push(i);
            }
        }
        
        while(!q.empty()){
            int sz=q.size();
            ans.clear();
            while(sz--){
                int front = q.front();
                q.pop();
                ans.push_back(front);
                for(auto &i:adj[front]){
                    indeg[i]--;
                    if(indeg[i]==1){
                        q.push(i);
                    }
                }
            }
        }
        
        
        return ans;
        
    }
};