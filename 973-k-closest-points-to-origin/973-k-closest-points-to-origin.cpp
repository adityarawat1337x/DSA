class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<float>> v;
        
        for(int i=0;i<points.size();i++){
            int x= points[i][0],y=points[i][1];
            float dist = sqrt(x*x + y*y);
            v.push_back({dist,(float)i});
        }
        
        sort(v.begin(),v.end());
        vector<vector<int>> ans;
        int i=0;
        while(k--){
            ans.push_back(points[v[i][1]]);
            i++;
        }
        return ans;
    }
};