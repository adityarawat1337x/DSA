bool cmpr(vector<int> &a, vector<int> &b){
    return a[1]<b[1];
}

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n =intervals.size();
        int ans = -1;
        if(n == 0)
            return 0;
        sort(intervals.begin(), intervals.end(), cmpr);
        vector<int> prev = intervals[0];
        for(auto i: intervals){
            if(prev[1]>i[0])
                ans++;
            else
                prev=i;
        }
        return ans;
    }
};
