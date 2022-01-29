class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intv) {
        sort(intv.begin(),intv.end());
        vector<vector<int>> ans;
        vector<int> prev = intv[0];
        ans.push_back(intv[0]);
        
        for(int i=1;i<intv.size();i++){
            if(intv[i][0] <= prev[1]){
                ans.pop_back();
                ans.push_back({min(prev[0],intv[i][0]),max(prev[1],intv[i][1])});
                prev=ans.back();
            }else{
                ans.push_back(intv[i]);
                prev=ans.back();
            }
        }
        
        return ans;
    }
};