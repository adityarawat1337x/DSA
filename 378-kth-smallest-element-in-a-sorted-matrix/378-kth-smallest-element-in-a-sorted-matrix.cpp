class Solution {
public:
    int kthSmallest(vector<vector<int>>& mat, int k) {
        int low = mat[0][0],high = mat.back().back()+1;
        while(low<=high){
            int mid = low+(high-low)/2;
            int smaller=0;
            for(int i=0,j=mat.size()-1;i<mat.size();i++){
                while(j>=0 and mat[i][j]>mid)j--;
                smaller += (j+1);
            }
            
            if(smaller<k)
                low=mid+1;
            else high=mid-1;
        }
        
        return low;
    }
};


