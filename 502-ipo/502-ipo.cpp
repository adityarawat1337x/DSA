class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<pair<int,int>> vp;
        int n = profits.size();
        for(int i=0; i<n; i++) vp.push_back({capital[i],profits[i]});
        sort(vp.begin(),vp.end());
        priority_queue<int> pq;
        int i=0;
        while(i < n and k > 0) {
            while(i < n and vp[i].first <= w) pq.push(vp[i++].second);
            if(pq.empty()) break;
            w+=pq.top(), pq.pop();
            k--;
        }
        while(k-- and !pq.empty()) w+=pq.top(),pq.pop();
        return w;
    }
};

