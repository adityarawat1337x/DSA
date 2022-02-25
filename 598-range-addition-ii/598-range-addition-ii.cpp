class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if(ops.size()==0)
            return m*n;
        int prevX=ops[0][0],prevY=ops[0][1];
        
        for(int i=1;i<ops.size();i++){
            prevX = min({m,prevX,ops[i][0]});
            prevY = min({n,prevY,ops[i][1]});
        }
        
        return prevX*prevY;
    }
};