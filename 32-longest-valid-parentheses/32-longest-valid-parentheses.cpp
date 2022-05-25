class Solution {
public:
    int longestValidParentheses(string s) {
        int ans=0;
        stack<int> st;
        st.push(-1);
        for(int j=0;j<s.size();j++){
            if(s[j]==')'){
                st.pop();
                if(st.empty())
                    st.push(j);
            }else{
                st.push(j);
            }
            
            ans = max(ans,j-st.top());
        }
        return ans;
    }
};