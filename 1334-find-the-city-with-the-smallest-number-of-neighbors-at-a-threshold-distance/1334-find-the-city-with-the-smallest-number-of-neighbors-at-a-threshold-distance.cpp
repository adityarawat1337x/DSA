class Solution {
public:
    void djikstra(vector<int> &dis,vector<pair<int,int>> adj[],int s){
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        dis[s]=0;
        pq.push({0,s});
        
        while(!pq.empty()){
            int src = pq.top().second;
            pq.pop();
            
            for(auto &x:adj[src]){
                int next=x.second,wt=x.first;
                
                if(dis[next]>dis[src]+wt){
                    dis[next]=dis[src]+wt;
                    pq.push({dis[next],next});
                }
            }
        }
    }
    
    
    int findTheCity(int n, vector<vector<int>>& edges, int thresh) {
        vector<vector<int>> dis(n,vector<int>(n,INT_MAX));
        vector<pair<int,int>> adj[n];
        
        for(auto i:edges){
            adj[i[0]].push_back({i[2],i[1]});
            adj[i[1]].push_back({i[2],i[0]});
        }
        
        for(int i=0;i<n;i++){
            djikstra(dis[i],adj,i);    
        }
        
        int ans=-1,ansCnt=INT_MAX;
        
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(dis[i][j]<=thresh)
                    cnt++;
            }
            if(cnt<=ansCnt){
                ans=i;
                ansCnt=cnt;
            }
        }
        
        return ans;
    }
};