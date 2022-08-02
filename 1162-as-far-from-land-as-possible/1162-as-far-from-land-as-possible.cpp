class Solution {
public:
    int maxDistance(vector<vector<int>>& M) {
      vector<pair<int, int>> dd = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
      queue<array<int, 3>>q;
     
      for(int i=0; i<M.size(); i++)
        for(int j=0; j<M[0].size(); j++){
          if(M[i][j])
            q.push({i, j, 0});
          M[i][j]=-1;
        }
      if(q.empty() or q.size()==M.size()*M.size())
          return -1;
      while(!q.empty()){
        auto [x, y, curr] = q.front();
        q.pop();
        if(x < 0 || y < 0 || x >= M.size() || y >= M[0].size() || M[x][y] != -1)
          continue;
        M[x][y] = curr;
        for(auto [dx, dy]:dd)
          q.push({x+dx, y+dy, curr+1});
      }
      int ans=-1;
       for(int i=0; i<M.size(); i++)
        for(int j=0; j<M[0].size(); j++){
          ans=max(ans,M[i][j]);
        }
        
      return ans;
    }
};
