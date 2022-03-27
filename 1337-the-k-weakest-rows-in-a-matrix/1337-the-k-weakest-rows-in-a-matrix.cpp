class Solution {
public:
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> v;
        vector<int> ans;
        for(int i=0;i<mat.size();i++){
            v.push_back({0,i});
            for(auto x:mat[i]){
                if(x==1)
                    v.back().first++;
            }
        }
        
        sort(v.begin(),v.end());
        for(int i=0;i<k;i++){
            ans.push_back(v[i].second);
        }
        
        return ans;
    }
};