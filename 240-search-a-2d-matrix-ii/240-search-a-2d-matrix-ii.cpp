class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        int i=0,j=n-1;
        
        while(i<m and j>-1){
            if(matrix[i][j]>target)
                j--;
            else if(matrix[i][j]<target)
                i++;
            else return true;
        }
        
        return false;
    }
};