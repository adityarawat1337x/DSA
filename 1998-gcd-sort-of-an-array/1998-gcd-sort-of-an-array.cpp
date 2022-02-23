class Solution {
    vector<int> rank,parent;
public:
     void un(int u,int v){
        u = find(u);
        v = find(v);
        if(u==v)
            return;
        if(rank[u]>rank[v]){
            parent[v]=u;
            rank[u]++;
        }else{
            parent[u]=v;
            rank[v]++;
        }
    }
    
    int find(int child){
        if(child==parent[child])
            return child;
        return parent[child] = find(parent[child]);
    }
     
    
    bool gcdSort(vector<int>& nums) {
        int n = *max_element(nums.begin(), nums.end());
        parent.resize(n+1); rank.resize(n+1);
        for(int i=0;i<=n;i++){
            rank[i]=0;
            parent[i]=i;
        }
        
       for (auto u:nums)
            for (int v = 2; v*v <= u; v ++) 
                if(u%v==0){
                    un(u/v,u);
                    un(u,v);
                }
        auto nums2=nums;
        sort(nums2.begin(),nums2.end());
        for(int i=0;i<nums.size();i++){
            if(find(nums[i])!=find(nums2[i]))
                return false;
        }
        
        return true;
       
    }
};