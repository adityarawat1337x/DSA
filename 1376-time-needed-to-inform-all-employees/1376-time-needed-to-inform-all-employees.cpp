class Solution {
public:
    int dfs(int id, vector<int> v[], vector<int>& time){
        int ans=0;
        for(auto i:v[id]){
            ans = max(ans,time[id]+dfs(i,v,time));
        }
        return ans;
    }
    
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<int> v[n];
        for(int i=0;i<manager.size();i++){
            if(manager[i]==-1)
                continue;
            v[manager[i]].push_back(i);
        }
        
        return dfs(headID,v,informTime);
    }
};