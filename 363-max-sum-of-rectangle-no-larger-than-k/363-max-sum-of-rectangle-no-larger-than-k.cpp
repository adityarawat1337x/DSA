class Solution {
public:
    int R,C;
    int kadane(vector<int> &mat, int &k){
        set<int> s;
        s.insert(0);
        int sum=0,ans=INT_MIN;
        for(int i=0;i<C;i++){
            sum+=mat[i];
            auto it = s.lower_bound(sum-k);
            
            if(it!=s.end()){
                ans=max(ans,sum-*it);
            }
            s.insert(sum);
        }
        
        return ans;
    }
    
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        R=matrix.size(),C=matrix[0].size();
        int ans=INT_MIN;
        
        for(int i=0;i<R;i++){
            vector<int> tmp(C,0);
            for(int l=i;l<R;l++){
                for(int r=0;r<C;r++){
                    tmp[r]+=matrix[l][r];
                }
                ans=max(ans,kadane(tmp,k));
            }
        }
        
        return ans;
    }
};