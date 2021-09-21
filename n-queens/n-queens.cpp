class Solution {
    static bool valid(vector<string> s,int row,int col,int n){
        for(int i=0;i<n;i++){
            if(i==row)
                continue;
            if(s[i][col]=='Q')
                return false;
        }
        for(int j=0;j<n;j++){
            if(j==col)
                continue;
            if(s[row][j]=='Q')
                return false;
        }
        for(int i=row+1,j=col+1;i<n && j<n;i++,j++){
            if(s[i][j]=='Q')
                return false;
        }
         for(int i=row-1,j=col-1;i>-1 && j>-1;i--,j--){
            if(s[i][j]=='Q')
                return false;
        } 
        for(int i=row+1,j=col-1;i<n && j>-1;i++,j--){
            if(s[i][j]=='Q')
                return false;
        } 
        for(int i=row-1,j=col+1;i>-1 && j<n;i--,j++){
            if(s[i][j]=='Q')
                return false;
        }
        return true;
    
    }
    
    
    static void itr(vector<string> s,int row,int col,int n, vector<vector<string>> &ans){
        if(row>=n){
            ans.push_back(s);
            return;
        }
        for(int j=0;j<n;j++){
            s[row][j]='Q';
            if(valid(s,row,j,n))
                itr(s,row+1,col,n,ans);
            s[row][j]='.';
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> str;
        for(int i=0;i<n;i++){
            string s="";
            for(int j=0;j<n;j++)
                s+='.';
            str.push_back(s);
        }
   
            for(int j=0;j<n;j++){
                str[0][j]='Q';
                if(valid(str,0,j,n))
                    itr(str,1,j,n,ans);
                str[0][j]='.';
            }
        return ans;
    }
};