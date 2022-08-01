class Solution {
public:
    int ans=0;
    int m_time=0;
    int dfs(int i,vector<int> &manager,vector<int> &informTime){ 
        if(manager[i]!=-1){
            informTime[i]+=dfs(manager[i],manager,informTime);
            manager[i]=-1;
        }
        
        return informTime[i];    
    }
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        int m=manager.size();
        for(int i=0;i<n;i++){
            if(manager[i]!=-1)
            m_time=max(m_time, dfs(i,manager,informTime));
        }

        return  m_time;
    }
};