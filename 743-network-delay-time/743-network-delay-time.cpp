class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int,int>> adj[n+1];
        for (int i = 0; i < times.size();i++){
            adj[times[i][0]].push_back({times[i][1],times[i][2]});
            //adj[times[i][1]].push_back({times[i][0],times[i][2]});
        }
        
        priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int> >> pq;
        vector<int> dist(n+1,INT_MAX);
        dist[0]=-1;
        dist[k]=0;
        pq.push({0,k});
        while(!pq.empty()){
            auto dis = pq.top().first;
            auto parent = pq.top().second;
            pq.pop();
            
            for(auto i:adj[parent]){
                auto node = i.first;
                auto newDis = i.second;
                if(dist[node]>dist[parent]+newDis){
                    dist[node] = dist[parent] + newDis;
                    pq.push({dist[node], node});
                }
            }
        }
    int ans=-1;
    for(auto i:dist){
        cout<<i<<" ";
        if(i==INT_MAX)
            return -1;
        ans=max(ans,i);
    }
    return ans;
    }
    
};