class Solution {
public:
     unordered_map<int,int> parent;
     int n,cnt=0;
    
    int findParent(int x){
        if (!parent.count(x)) parent[x] = x, cnt++;
        if(parent[x]!=x)
            return parent[x]=findParent(parent[x]);
        return x;
    }
    
    void Union(int i,int j){
        int x = findParent(i),  y = findParent(j);
        if(x!=y)        
            cnt--,parent[x]=y;
    }
    
    int removeStones(vector<vector<int>>& edges) {
        
        for(auto &e:edges){
            Union(e[0],~e[1]);
        }
 
        return edges.size()-cnt;
    }
};