class Solution {
public:
    int check(vector<vector<int>> &board){
        for(auto i:board){
            if(i[0]==i[1] and i[1]==i[2])
                return i[0];
        }
        
        for(int j=0;j<3;j++){
             if(board[0][j]==board[1][j] and board[0][j]==board[2][j])
                return board[0][j];
        }
        
        if(board[0][0]==board[1][1] and board[2][2]==board[0][0])
            return board[0][0];
        
        if(board[0][2]==board[1][1] and board[2][0]==board[0][2])
            return board[0][2];
        
        return -1;
    }
    
    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<int>> board(3,vector<int>(3,-1));
        int flag=0;
        for(auto i:moves){
            board[i[0]][i[1]]=flag;
            flag=1-flag;
            int val = check(board);
            if(val==0)
                return "A";
            if(val==1)
                return "B";
        }
        
        int val = check(board);
        if(val==0)
            return "A";
        if(val==1)
            return "B";
        
        for(auto i:board){
            for(auto j:i){
                cout<<j<<" ";
                if(j==-1)
                    return "Pending";
            }
        cout<<"\n";
        }
        
        return "Draw";
    }
};