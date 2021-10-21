class Solution {
public:
    int kthLargestValue(vector<vector<int>>& matrix, int k) {
        
        priority_queue<int, vector<int>,
                                greater<int>> heap1;
        heap1.push(matrix[0][0]);
        for(int i=1;i<matrix.size();i++){
            matrix[i][0] = matrix[i-1][0] xor  matrix[i][0];
            heap1.push(matrix[i][0]);
 
            if (heap1.size() > k) {
                heap1.pop();
            }
        }
        for(int j=1;j<matrix[0].size();j++){
            matrix[0][j]=matrix[0][j-1] xor  matrix[0][j];
            heap1.push(matrix[0][j]);
 
            if (heap1.size() > k) {
                heap1.pop();
            }}
            
        for(int i=1;i<matrix.size();i++)
            for(int j=1;j<matrix[0].size();j++){
                matrix[i][j] = matrix[i][j] xor  matrix[i-1][j] xor matrix[i][j-1] xor matrix[i-1][j-1];
                heap1.push(matrix[i][j]);
                if (heap1.size() > k) {
                    heap1.pop();
                }
            }
 
    return heap1.top();    
    }
};