/*class Solution {
    static void itr(vector<vector<int>>& res,vector<int> temp, int ind ,int st, int end,int k,int sm,int n){
         if(ind == k){
             if(sm==n)
                res.push_back(temp);
             return;
         }
         for(int i = st;i<end && end-i+1 >= k-ind;i++){
             temp[ind] = i+1;
             sm+=i+1;
             itr(res,temp,ind+1,i+1,end,k,sm,n);
             sm-=(i+1);
         }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        if(k>=n)
            return {};
        vector<vector<int>> res;
        vector<int> temp(k,0);
        itr(res,temp,0,0,n,k,0,n);
        return res;
    }
};*/

#define eb emplace_back
#define pob pop_back

class Solution {
    
static void target(vector<vector<int>>&ans, vector<int>&v, int k, int n, int start){
    if(n<0 || k==0 && n!=0)return;
    if(k==0 && n==0){
        ans.eb(v);
        return;
    }
    for(int i=start;i<=9;i++){
        v.eb(i);
        target(ans, v, k-1, n-i, i+1);
        v.pob();
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