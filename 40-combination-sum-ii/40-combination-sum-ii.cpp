class Solution {
public:
      void solve(vector<vector<int>> &ans,vector<int> &v,vector<int>& can,int t,int idx,int sum){
        if(sum==t){
            if(!ans.size() or ans.back()!=v)
                ans.push_back(v);
            return;
        }
        
        if(sum>t or idx>=can.size())
            return;
        
        for(int i=idx;i<can.size();i++){
            if(i!=idx and can[i]==can[i-1])
                continue;
            
            if(can[i]+sum<=t){
                v.push_back(can[i]);
                solve(ans,v,can,t,i+1,sum+can[i]);
                v.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& can, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        sort(can.begin(),can.end());
        solve(ans,v,can,target,0,0);
        return ans;
    }
};