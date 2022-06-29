class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(),people.end(),[] (const auto& lhs, const auto& rhs) {
            return lhs[0] > rhs[0] or (lhs[0] == rhs[0] and lhs[1]<rhs[1]);
        });
        vector<vector<int>> ans;
        for(auto p:people){
            auto ahead=p[1];
            ans.insert(ans.begin()+ahead,p);
        }
        return ans;
    }
};