class Solution {
public:
    
    int uniquePaths(int m,int n) {
        vector<long> row(n+1);
        
        row[n-1]=1;
        for(int i=m-1;i>-1;i--){
            vector<long> tmp(n+1);
            for(int j=n-1;j>-1;j--){
                tmp[j] = row[j] + tmp[j+1];
            }
            row=tmp;
        }
            
        return row[0];
        
    }
};














