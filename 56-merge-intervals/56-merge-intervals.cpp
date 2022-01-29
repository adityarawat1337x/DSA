class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> res;
        int l = intervals[0][0];
        int r = intervals[0][1];
        for(int i = 1; i < intervals.size(); i++) {
            if(intervals[i][0] <= r) {
                if(intervals[i][1] > r)
                    r = intervals[i][1];
            } else {
                res.push_back({l, r});
                l = intervals[i][0];
                r = intervals[i][1];
            }
        }
        res.push_back({l, r});
        return res;
    }
};