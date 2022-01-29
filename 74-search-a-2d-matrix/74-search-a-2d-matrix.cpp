class Solution {
public:
    
    bool binary_search(vector<int> &v,int t){
        int l=0,r=v.size()-1;
        
        while(l<=r){
            int m = (l+r)/2;
            if(v[m]==t)
                return true;
            if(v[m]>t)
                r=m-1;
            else 
                l=m+1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(),m=matrix[0].size();
        for(int i=0;i<n;i++)
            if(matrix[i][0]<=target and matrix[i][m-1]>=target)
                return binary_search(matrix[i],target);
        
        return false;
    }
};