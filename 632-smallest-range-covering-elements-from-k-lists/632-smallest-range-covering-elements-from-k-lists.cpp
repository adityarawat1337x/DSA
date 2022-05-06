class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        vector<pair<int,int>> v;
        unordered_map<int,int> mp;
        int k=nums.size();
        int id=0;
        for(auto i:nums){
            id++;
            for(auto j:i){
                v.push_back({j,id});
            }
        }
        vector<int> ans;
        int mini=INT_MAX;
        sort(v.begin(),v.end());
        int ctr=0;
        for(int i=0,j=0;j<v.size();j++){
            if(!mp[v[j].second]++)ctr++;
            if(ctr==k){
                while(mp[v[i].second]>1)mp[v[i++].second]--;
                if (ans.empty() || ans[1] - ans[0] > v[j].first - v[i].first) {
                    ans = vector<int>{v[i].first, v[j].first};
                }
            }
        }
        
        return ans;
        
    }
};