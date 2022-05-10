class Solution {
    
static void target(vector<vector<int>>&ans, vector<int>&v, int k, int n, int start){
    if(n<0 || k==0 && n!=0)return;
    if(k==0 && n==0){
        ans.emplace_back(v);
        return;
    }
    for(int i=start;i<=9;i++){
        v.emplace_back(i);
        target(ans, v, k-1, n-i, i+1);
        v.pop_back();
    }
}
    
public:

vector<vector<int>> combinationSum3(int k, int n) {
    vector<vector<int>>ans;
    vector<int>v;
    target(ans,v,k,n,1);
    return ans;
}
};