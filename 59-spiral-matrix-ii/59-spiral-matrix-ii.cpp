class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n,vector<int>(n));
        int cnt = n*n;
        int top=0,bottom=n-1,left=0,right=n-1;
        int i=0,j=0;
        int x=1;
        while(top<=bottom and left<=right){
            for(j=left,i=top;j<=right;j++){
                v[i][j]=x;
                x++;
            }
            top++;
            
            if(x>cnt)
                return v;
            
            for(i=top,j=right;i<=bottom;i++){
                v[i][j]=x;
                x++;
            }
            right--;
            
            if(x>cnt)
                return v;
            
            for(j=right,i=bottom;j>=left;j--){
                v[i][j]=x;
                x++;
            }
            bottom--;
            
            if(x>cnt)
                return v;
            
            for(i=bottom,j=left;i>=top;i--){
                v[i][j]=x;
                x++;
            }
            left++;
        }
        
        return v;
    }
};