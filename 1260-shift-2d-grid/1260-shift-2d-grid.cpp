class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size(),n=grid[0].size();
        vector<vector<int>> ans(grid);
        
        k=k%(m*n);
        int plc = ((m*n) - k + 1)%(m*n+1);
        int i=0,j=0;
        cout<<plc;
        if(plc!=0){
            for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                    plc--;
                    if(plc==0)
                        break;
                }
                if(plc==0)
                   break;
            }
        }
    
        for(int x=0;x<m;x++){
            for(int y=0;y<n;y++){
                ans[x][y]=grid[i][j];
                j++;
                if(j>=n){
                    j=0;
                    i++;
                    i=(i)%m;
                }
            }
        }
        
        return ans;
    }
};