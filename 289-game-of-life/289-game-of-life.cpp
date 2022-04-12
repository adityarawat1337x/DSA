class Solution {
public:
    int cntDead(vector<vector<int>>& board,int i,int j){
        if(i<0 or j<0 or i>=board.size() or j>=board[0].size())
            return 0;
        if(board[i][j]==0 or board[i][j]==2)
            return 1;
        return 0;
    }
    
    
    int cntLive(vector<vector<int>>& board,int i,int j){
        if(i<0 or j<0 or i>=board.size() or j>=board[0].size())
            return 0;
        if(board[i][j]==1 or board[i][j]==-1)
            return 1;
        return 0;
    }
    
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size(),m=board[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int dead = cntDead(board,i+1,j)+cntDead(board,i,j+1)+cntDead(board,i-1,j)+cntDead(board,i+1,j+1)+cntDead(board,i-1,j-1)+cntDead(board,i+1,j-1)+cntDead(board,i-1,j+1)+cntDead(board,i,j-1);
                int live = cntLive(board,i+1,j)+cntLive(board,i,j+1)+cntLive(board,i-1,j)+cntLive(board,i+1,j+1)+cntLive(board,i-1,j-1)+cntLive(board,i+1,j-1)+cntLive(board,i-1,j+1)+cntLive(board,i,j-1);
                if(board[i][j]){
                    if(live<2 or live>3)
                        board[i][j]=-1;
                }else{
                    if(live==3)
                        board[i][j]=2;
                }
                    
            }
        }

       for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==-1)
                    board[i][j]=0;
                if(board[i][j]==2)
                    board[i][j]=1;
            }
       }
        
    }
};