class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> pre;
        pre.push_back(0);
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            pre.push_back(pre.back()^arr[i]);
        }
        
        for(auto i:queries){
            ans.push_back(pre[i[1]+1]^pre[i[0]]);
        }
        return ans;
    }
};