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
        
        if(can[idx]+sum<=t){
            v.push_back(can[idx]);
            solve(ans,v,can,t,idx,sum+can[idx]);
            v.pop_back();
        }
        solve(ans,v,can,t,idx+1,sum);
    }
    
    vector<vector<int>> combinationSum(vector<int>& can, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        sort(can.begin(),can.end());
        solve(ans,v,can,target,0,0);
        return ans;
    }
};