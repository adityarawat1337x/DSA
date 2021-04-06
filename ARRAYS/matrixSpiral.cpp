#include<bits/stdc++.h>
#include<vector>

using namespace std;

void run(int &i,int &j,int r,int c,int srow,int scol,int &ctr,int row,int col,vector<int>& ans,vector<vector<int>>& matrix){
        if(r==0){
            for(;j<col && j>=scol;j+=c){
                ans.push_back(matrix[i][j]);
                cout << matrix[i][j];
                ctr--;
            }
            j -= c;
        }
        else
        {
            for(;i<row && i>=srow;i+=r){
                ans.push_back(matrix[i][j]);
                cout << matrix[i][j];
                ctr--;
            }
            i -= r;
        }
}

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans;
    int ctr=matrix.size()*matrix[0].size();
    int row=matrix.size(),col=matrix[0].size(),i=0,j=-1,srow=0,scol=0;
    while(ctr>0){
        j++;
        if(ctr>0)run(i, j, 0, 1,srow,scol, ctr, row, col, ans, matrix);
        srow++;
        i++;
        if(ctr>0)run(i, j, 1, 0, srow,scol,ctr, row, col, ans, matrix);
        col--;
        j--;
        if(ctr>0)run(i, j, 0, -1,srow,scol, ctr, row, col, ans, matrix);
        row--;
        i--;
        if(ctr>0)run(i, j, -1, 0, srow,scol,ctr, row, col, ans, matrix);
        scol++;
    }
return ans;
}


int main(){
    vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}}; // -2 -2 1 3 4 5
    spiralOrder(arr);
    return 0;
}