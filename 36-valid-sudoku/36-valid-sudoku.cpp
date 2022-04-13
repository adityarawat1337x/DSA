class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=board.size(),m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='.')
                    continue;
                for(int x=0;x<n;x++){
                    if(x==i)
                        continue;
                    if(board[x][j]==board[i][j])
                        return false;
                }                    
                
                for(int x=0;x<m;x++){
                    if(x==j)
                        continue;
                    if(board[i][x]==board[i][j])
                        return false;
                }           
                
                int l=(i/3)*3;
                int r=(j/3)*3;
                
                for(int k=l;k<l+3;k++){
                    for(int v=r;v<r+3;v++){
                        if(i==k and j==v)
                            continue;
                        if(board[k][v]==board[i][j])
                            return false;
                    }
                }
            }
        }
        
        return true;
    }
};