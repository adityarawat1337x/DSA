#include<bits/stdc++.h>
#include<vector>

using namespace std;

bool find(int a,int b,string words,vector<vector<char>> board,int i){
    if(a==-1 || b==-1 || a>=board.size() || b>=board[0].size())
        return false;
    if(board[a][b]==words[i]){
        //board[a][b]=' ';
        return     
        find(a+1,b,words,board,i+1) || 
        find(a,b+1,words,board,i+1) ||
        find(a-1,b,words,board,i+1) ||
        find(a,b-1,words,board,i+1);
        
    }
    else{
        return false;
    }
    
    
}

bool exist(vector<vector<char>>& board, string word) {
    int a,b;
    for(int i=0;i<board.size();i++)
        for(int j=0;j<board[0].size();j++){
            if(word[0] == board[i][j]){
                a=i;
                b=j;
                if(find(a,b,word,board,0))
                    return true;
            }
        }
return false;
}


int main(){
    vector<char> a{"A", "B", "C", "E"};
    vector<char> b{"S", "F", "C", "S"};
    vector<char> c{"A", "D", "E", "E"};
    cout << exist({a,b,c}, "ABCCED");
    return 0;
}
