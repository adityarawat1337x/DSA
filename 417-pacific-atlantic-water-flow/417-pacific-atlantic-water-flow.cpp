class Solution {
public:
    int d[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
    int r,c;
    void dfs(vector<vector<int>>& heights,int i,int j,int prev,vector<vector<bool>>& ocean){
        if(i<0 or j<0 or i>=r or j>=c or ocean[i][j] or prev>heights[i][j])
            return;
        ocean[i][j]=1;
        
        for(int k=0;k<4;k++)
            dfs(heights,i+d[k][0],j+d[k][1],heights[i][j],ocean);
    }
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        r=heights.size(),c=heights[0].size();
        vector<vector<bool>> pac(r,vector<bool>(c,0)),atl(r,vector<bool>(c,0));
        vector<vector<int>> ans;
        
        for(int i=0;i<r;i++){
            dfs(heights,i,0,INT_MIN,pac);
            dfs(heights,i,c-1,INT_MIN,atl);
        }
        
        
        for(int i=0;i<c;i++){
            dfs(heights,0,i,INT_MIN,pac);
            dfs(heights,r-1,i,INT_MIN,atl);
        }
        
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                if(atl[i][j] and pac[i][j])
                    ans.push_back({i,j});
        
        return ans;
                    
    }
};