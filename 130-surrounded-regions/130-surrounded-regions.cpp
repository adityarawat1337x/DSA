class Solution {
public:
    int dir[4][2]={{-1,0},{1,0},{0,1},{0,-1}};

    int valid(int i,int j,vector<vector<char>> &A){
        return (i>-1 and j>-1 and i<A.size() and j<A[0].size() and A[i][j]=='O');
    }

    void dfs(int i,int j,vector<vector<char>> &A){
        if(!valid(i,j,A))
            return;
        A[i][j]='#';
        for(int k=0;k<4;k++){
            dfs(dir[k][0]+i,dir[k][1]+j,A);
        }
    }

    void solve(vector<vector<char>> &A) {
        for(int j=0;j<A[0].size();j++)
            dfs(0,j,A);
        for(int i=0;i<A.size();i++)
            dfs(i,0,A);
        for(int j=0;j<A[0].size();j++)
            dfs(A.size()-1,j,A);
        for(int i=0;i<A.size();i++)
            dfs(i,A[0].size()-1,A);

        for(auto &i:A){
            for(auto &j:i)
                if(j=='#'){
                    j='O';
                }else j='X';
        }
    }

};