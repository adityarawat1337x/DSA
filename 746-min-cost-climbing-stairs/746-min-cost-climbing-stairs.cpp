class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int prev2 = cost[0];
        int prev = cost[1];
        
        for(int i=2;i<n;i++){
            int tmp = cost[i] + min(prev,prev2);
            prev2=prev;
            prev=tmp;
        }
        
        return min(prev,prev2);
    }
};