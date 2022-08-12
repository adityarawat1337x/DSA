class Solution {
public:
    int dx[4]={0,0,1,-1},dy[4]={1,-1,0,0};
    
    struct Node{
        int val,x,y;
        Node(int a,int b,int c){
            val=a,x=b,y=c;
        }
    };
    
    struct Compare {
        bool operator()(Node const& p1, Node const& p2){
            return p1.val > p2.val;
        }
    };
    bool valid(vector<vector<int>>& graph, vector<vector<int>> &vis,int &i,int &j){
        return (i>-1 and j>-1 and i<graph.size() and j<graph[0].size() and vis[i][j]==0);
    }
    
    int trapRainWater(vector<vector<int>>& graph) {
        int m = graph.size(),n=graph[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
        priority_queue<Node,vector<Node>,Compare> pq;
        
        for(int i=0;i<m;i++){
            vis[i][0]=vis[i][n-1]=1;
            pq.push(Node(graph[i][0],i,0));
            pq.push(Node(graph[i][n-1],i,n-1));
        }
        for(int i=0;i<n;i++){
            vis[0][i]=vis[m-1][i]=1;
            pq.push(Node(graph[0][i],0,i));
            pq.push(Node(graph[m-1][i],m-1,i));
        }
        int ans=0;
        
        while(!pq.empty()){
            auto top=pq.top();
            pq.pop();
            
            for(int i=0;i<4;i++){
                int x=dx[i]+top.x,y=dy[i]+top.y;
                
                if(valid(graph,vis,x,y)){
                    vis[x][y]=1;
                    ans+=max(0,top.val-graph[x][y]);
                    pq.push(Node(max(top.val,graph[x][y]),x,y));
                }
            }
        }
                         
        return ans;
    }
};