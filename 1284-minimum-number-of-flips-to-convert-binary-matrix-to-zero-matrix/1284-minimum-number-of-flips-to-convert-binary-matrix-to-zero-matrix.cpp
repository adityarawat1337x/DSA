class Solution {
public:
    int row,col;
    int dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
    
    void modify(vector<vector<int>>& mat,int &r,int &c){
        mat[r][c]=1-mat[r][c];
        for(int k=0;k<4;k++){
            int x=r+dx[k],y=c+dy[k];
            if(x>-1 and x<row and y>-1 and y<col)
                mat[x][y]=1-mat[x][y];
        }
    }
    
    long solve(vector<vector<int>>& mat,int r,int c){
        if(r >= row){
            for(auto &i:mat) for(auto &j:i) if(j==1) return INT_MAX;
            return 0;
        }
        
        if(c >= col)
            return solve(mat,r+1,0);
        
        long take=INT_MAX,notake=INT_MAX;
        
        modify(mat,r,c);
        take = 1+solve(mat,r,c+1);
        modify(mat,r,c);
        notake = solve(mat,r,c+1);
        
        return min(take,notake);
    }
    
    int minFlips(vector<vector<int>>& mat) {
        row=mat.size(),col=mat[0].size();
        long x = solve(mat,0,0);
        return x>=INT_MAX?-1:x;
    }
};