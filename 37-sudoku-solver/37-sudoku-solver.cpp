class Solution {
public:
    bool valid(vector<vector<char>>& board,char c,int i,int j){
        int n = 9;

        //if(i>=n or j>=n)
          //  return false;
        
        for(int x=0;x<n;x++)
            if(board[x][j]==c or board[i][x]==c)
                return false;
            
        
        
        int x=(i/3)*3;
        int y=(j/3)*3;
        
        for(int a=x;a<x+3;a++)
            for(int b=y;b<y+3;b++)
                if(board[a][b]==c)
                    return false;
                
        
        return true;
    }
    
    bool solve(vector<vector<char>>& board,int i,int j){
               
        if(i>=9){
            return true;
        }
        
        if(j>=9){
            return solve(board,i+1,0);
        }
        
        if(board[i][j]!='.')
            return solve(board,i,j+1);
        
        for(char ch='1';ch<='9';ch++){
            if(valid(board,ch,i,j)){
                board[i][j]=ch;
                if(solve(board,i,j+1))
                    return true;
                board[i][j]='.';
            }
        }
        return false;    
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        solve(board,0,0);
    }
};