class Solution {
public:
    vector<int> gpar;
    
    void Union(int a,int b){
        a=find(a),b=find(b);
        gpar[a]=b;
    }
    
    int find(int a){
        if(gpar[a]!=a)
            return gpar[a]=find(gpar[a]);
        return a;
    }
    
    vector<vector<string>> accountsMerge(vector<vector<string>>& em) {
        vector<vector<string>> ans(em.size());
        vector<vector<string>> res;
        unordered_map<string,int> par;
        int n=em.size();
        gpar.resize(n);
        for(int i=0;i<n;i++) gpar[i]=i;

        for(int i=0;i<em.size();i++){
            for(int j=1;j<em[i].size();j++){
                if(par.find(em[i][j])!=par.end())
                    Union(par[em[i][j]],i);
                par[em[i][j]]=i;
            }
        }
        
        
        for(auto &it:par){
            auto [email,user] = it;
            user=find(user);
            ans[user].push_back(email);
        }
        
        int user=-1;
        for(auto &i:ans){
            user++;
            if(i.size()==0)
                continue;
            sort(i.begin(),i.end());
            vector<string> v;
            v.push_back(em[user][0]);
            v.insert(v.begin()+1,i.begin(),i.end());
            res.push_back(v);
        }
        return res;
    }
};
   