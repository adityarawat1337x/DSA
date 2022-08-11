class Solution {
public:
    int n;
    unordered_map<int,int> parent;
    unordered_map<int,int> rank;
    int dx[4]={0,0,1,-1},dy[4]={1,-1,0,0};
    
    int find(int x){
        if(parent[x]==x)
            return x;
        return parent[x] = find(parent[x]);
    }
    
    void Union(int x,int y){
        x=find(x),y=find(y);

        if(rank[x]>rank[y]){
            parent[y]=x;
            rank[x]+=rank[y];
        }else{
            parent[x]=y;
            rank[y]+=rank[x];
        }
    }
    
    bool invalid(vector<vector<int>>& grid,int &i,int &j){
        return (i>=n or j>=n or i<0 or j<0 or grid[i][j]==0);
    }
    
    void dfs(vector<vector<int>>& grid,int i,int j){
        if(invalid(grid,i,j))
            return;
        
        grid[i][j]=0;
        
        for(int k=0;k<4;k++){
            int a=dx[k]+i,b=dy[k]+j;
            if(!invalid(grid,a,b) and find(a*n+b)!=find(i*n+j)){
                Union(i*n+j,a*n+b);
                dfs(grid,a,b);
            }
        }
        grid[i][j]=1;    
    }
    
    int largestIsland(vector<vector<int>>& grid) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        n=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                parent[i*n+j]=(i*n+j);
                rank[i*n+j]=1;
            }
        }
        

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(find(i*n+j)==(i*n+j) and grid[i][j]==1)
                    dfs(grid,i,j);
            }
        }
        
        int ans=0;
        for(auto &i:rank){
            ans=max(ans,i.second);
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                   int tmp=1;
                   unordered_set<int> st;
                   for(int k=0;k<4;k++){
                        int a=dx[k]+i,b=dy[k]+j;
                        if(!invalid(grid,a,b)){
                            a=find(a*n+b);
                            st.insert(a);
                        }
                    }
                   for(auto &it:st){
                       tmp+=rank[it];
                   }
                    ans=max(ans,tmp);
                }
            }
        }
        
        return ans;
    }
};