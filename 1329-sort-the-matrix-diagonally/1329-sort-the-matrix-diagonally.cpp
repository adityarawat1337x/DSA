class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int row=mat.size(),col=mat[0].size();
        for(int j=col-1;j>-1;j--){
            vector<int> v;
            int r=0,c=j;
            while(r<row and c<col){
                v.push_back(mat[r][c]);
                r++,c++;
            }
            sort(v.begin(),v.end());
            r=0,c=j;
            int i=0;
            while(r<row and c<col){
                mat[r][c]=v[i];
                i++,r++,c++;
            }
        }
        
         for(int j=1;j<row;j++){
            vector<int> v;
            int r=j,c=0;
            while(r<row and c<col){
                v.push_back(mat[r][c]);
                r++,c++;
            }
            sort(v.begin(),v.end());
            r=j,c=0;
            int i=0;
            while(r<row and c<col){
                mat[r][c]=v[i];
                i++,r++,c++;
            }
        }
        return mat;
    }
};