class Solution {
public:
    
    bool valid(vector<string> &board,int i,int j){
        int n = board.size();
        if(i>=n or j>=n or i<0 or j<0)
            return false;
        for(int x=0;x<n;x++){
            if(board[x][j]=='Q' or board[i][x]=='Q'){
                return false;
            }
        }
    
       int a=i,b=j;
       while(a>=0 and b>=0){
           if(board[a][b]=='Q')
               return false;
           a--,
           b--;
       }
       a=i,b=j;
       while(a<n and b<n){
           if(board[a][b]=='Q')
               return false;
           a++,
           b++;
       }
         a=i,b=j;
       while(a>=0 and b<n){
           if(board[a][b]=='Q')
               return false;
           a--,
           b++;
       }
       a=i,b=j;
       while(a<n and b>=0){
           if(board[a][b]=='Q')
               return false;
           a++,
           b--;
       }
        
       return true;
    }
    
    void solve(vector<vector<string>> &ans,vector<string> &board,int x){
    
        if(x==board.size()){
            ans.push_back(board);
            return;
        }
        
        for(int i=0;i<board.size();i++){
            if(valid(board,x,i)){
                board[x][i]='Q';
                solve(ans,board,x+1);
                board[x][i]='.';
            }
        }
        
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>  ans;
        vector<string> board(n);
        string tmp;
        for(int i=0;i<n;i++){
            tmp+='.';
        }
        for(int j=0;j<n;j++){
            board[j]=tmp;
        }
        
        solve(ans,board,0);
        
        return ans;
        
    }
};