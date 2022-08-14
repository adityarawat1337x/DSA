/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    unordered_map<int,int> mp;
    unordered_set<int> vis;
    
    int dfs(int id,vector<Employee*> emp){
        vis.insert(id);
        auto x = mp[id];
        int imp = emp[x]->importance;
        vector<int> sub = emp[x]->subordinates;
        int ans=imp;
        for(auto &i:sub)
            if(!vis.count(i))
                ans+=dfs(i,emp);
        return ans;
    }
    
    int getImportance(vector<Employee*> emp, int id) {
        for(int i=0;i<emp.size();i++){
            mp[emp[i]->id]=i;
        }
        
        return dfs(id,emp);
    }
};