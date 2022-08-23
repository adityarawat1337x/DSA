class Solution {
public:
    int R,C;
    int slide(vector<int> &x,int k){
        int ans=INT_MIN,s=0;
        set<int> st;
        st.insert(0);
        for(int j=0;j<x.size();j++){
            s+=x[j];
            auto it = st.lower_bound(s-k);  
            if(it!=st.end()){
                ans=max(ans,s-*it);
            }
            st.insert(s);
        }
 
        return ans;
    }
    int maxSumSubmatrix(vector<vector<int>>& matrix, int K) {
        int ans=INT_MIN;
        R=matrix.size(),C=matrix[0].size();
        for(int k=0;k<R;k++){
            vector<int> v(C,0);
            for(int i=k;i<R;i++){
                for(int j=0;j<C;j++){
                    v[j]=matrix[i][j]+v[j];
                }
                ans=max(ans,slide(v,K));
            }
        }
        return ans;
    }
};