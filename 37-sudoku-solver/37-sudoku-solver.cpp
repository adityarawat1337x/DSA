class Solution {
public:
    bool valid(vector<vector<char>>& board,vector<vector<bool>> &row,vector<vector<bool>> &col,char c,int i,int j){
        int n = 9;
        
        if(row[i][c-'1'] or col[j][c-'1'])
            return false;
        
        //if(i>=n or j>=n)
          //  return false;
        
     //   for(int x=0;x<n;x++)
       //     if(board[x][j]==c or board[i][x]==c)
         //       return false;
            
        int x=(i/3)*3;
        int y=(j/3)*3;
        
        for(int a=x;a<x+3;a++)
            for(int b=y;b<y+3;b++)
                if(board[a][b]==c)
                    return false;
                
        
        return true;
    }
    
    bool solve(vector<vector<char>>& board,vector<vector<bool>> &row,vector<vector<bool>> &col,int i,int j){
               
        if(i>=9){
            return true;
        }
        
        if(j>=9){
            return solve(board,row,col,i+1,0);
        }
        
        if(board[i][j]!='.')
            return solve(board,row,col,i,j+1);
        
        for(char ch='1';ch<='9';ch++){
            if(valid(board,row,col,ch,i,j)){
                board[i][j]=ch;
                row[i][ch-'1']=col[j][ch-'1']=true;
                if(solve(board,row,col,i,j+1))
                    return true;
                board[i][j]='.';
                row[i][ch-'1']=col[j][ch-'1']=false;
            }
        }
        return false;    
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        vector<vector<bool>> row(9,vector<bool>(9,false)),col(9,vector<bool>(9,false));
        
        for(int i=0;i<9;i++)
            for(int j=0;j<9;j++)
                if(board[i][j]!='.')
                    row[i][board[i][j]-'1']=col[j][board[i][j]-'1']=true;
            
        solve(board,row,col,0,0);
    }
};