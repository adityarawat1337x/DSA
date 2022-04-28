class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();
        vector<vector<int>> absdist(n,vector<int>(m,INT_MAX));
        priority_queue<pair<pair<int,int>, int>, vector<pair<pair<int,int>,int>>, greater<pair<pair<int,int>,int> >> pq;
        pq.push({{0,0},0});
        absdist[0][0]=0;
        
        int it[]={0,-1,0,1};
        int jt[]={-1,0,1,0};
        
        while(!pq.empty()){
            auto[parent,dist] = pq.top();
            auto [r,c] = parent;    
            pq.pop();

            if(r==n-1 && c==m-1)
                return dist;
            for(int move=0;move<4;move++){
                int newr=r+it[move],newc=c+jt[move];
                if(newr>-1 && newr<n && newc>-1 && newc<m){
                    int newDist = abs(heights[r][c]-heights[newr][newc]);
                    newDist = max(dist,newDist);
                    if(newDist<absdist[newr][newc]){
                        absdist[newr][newc]=newDist;
                        pq.push({{newr,newc},newDist});
                    }
                }
            }
            
        }
        return 0;
    }
};