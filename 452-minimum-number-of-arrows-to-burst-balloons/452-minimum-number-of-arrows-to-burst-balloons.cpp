class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(),[](auto &a,auto &b){
            return (a[1]<b[1] or (a[1]==b[1] and a[0]<b[0]));
        });
        vector<vector<int>> res;
        int l = intervals[0][0];
        int r = intervals[0][1];
        for(int i = 1; i < intervals.size(); i++) {
            if(intervals[i][0] <= r) {
                if(intervals[i][1] > r)
                    r = min(r,intervals[i][1]);
                    l = min(l,intervals[i][0]);
            } else {
                res.push_back({l, r});
                l = intervals[i][0];
                r = intervals[i][1];
            }
        }
        res.push_back({l, r});
        return res.size();
    }
};