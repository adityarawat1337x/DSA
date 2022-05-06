class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st;
        int ctr=0;
        for(auto i:s){
            if(st.empty() || st.top().first!=i){
                st.push({i,1});
            }else {
                st.push({i,st.top().second+1});
            }
            
            if(st.top().second==k){
                int tmp=k;
                while(tmp--){
                    st.pop();
                }
            }
        }
        
        string ans="";
        while(st.size()){
            ans+=st.top().first;
            st.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};