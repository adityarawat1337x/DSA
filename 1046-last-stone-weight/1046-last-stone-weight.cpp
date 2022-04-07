class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(auto i:stones){
            pq.push(i);
        }
        while(pq.size()>1){
            int y = pq.top();
            pq.pop();
            int x = pq.top();
            pq.pop();
            int res = max(x,y)-min(x,y);
            if(res)
                pq.push(res);
        }
        
        if(pq.size()==1)
            return pq.top();
        return 0;
    }
};