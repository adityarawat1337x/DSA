class Solution {
public:
    bool DFS(int &i,vector<bool> &dfs, vector<bool> &dfsCurr,vector<vector<int>>& graph){
        dfs[i]=true;
        dfsCurr[i]=true;
        
        for(auto x:graph[i]){
            if(!dfs[x]){
                if(DFS(x,dfs,dfsCurr,graph))
                    return true;
            }else if(dfsCurr[x]){
                return true;
            }
        }
        
        dfsCurr[i]=false;
        return false;
    }
    
    
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<bool> dfs(n,false),dfsCurr(n,false);
        vector<vector<int>> graph(n);
        for(auto i:pre){
            graph[i[0]].push_back(i[1]);
        }
        
        for(int i=0;i<n;i++)
            if(DFS(i,dfs,dfsCurr,graph))
                return false;
        
        return true;
        }
};