bool cmp(vector<int>& a, vector<int>& b) {return a[1] < b[1];}
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& segments) {        
        sort(segments.begin(), segments.end(), cmp);
        int ans = 0, right = INT_MIN;
        
        for (int i = 0; i < segments.size(); i ++) {
            if (segments[i][0] < right) 
                ans++;
            else right = segments[i][1];
        }
        
        return ans;
    }
};
