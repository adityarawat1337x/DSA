class Solution {
public:
    
    int findCheapestPrice(int n, vector<vector<int>>& edges, int src, int dst, int k) {
        vector<pair<int,int>> adj[n];
        vector<int> dist(n,INT_MAX);
        
        for(auto i:edges){
            adj[i[0]].push_back({i[2],i[1]});
        }
        
        queue<pair<int,int>> pq;
        int level=0;
        pq.push({src,0});
        dist[src]=0;
        
        while(!pq.empty() and level<=k){
            int sz=pq.size();
            while(sz--){
                auto [node,dis]=pq.front();
                pq.pop();
                
                for(auto &x:adj[node]){
                    int next=x.second,wt=x.first;
                    if(dist[next]>dis+wt){
                        dist[next]=dis+wt;
                        pq.push({next,dist[next]});
                    }
                }
            }
            level++;
        }
        
        return dist[dst]==INT_MAX?-1:dist[dst];
    }
};