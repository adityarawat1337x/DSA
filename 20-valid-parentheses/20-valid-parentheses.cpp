class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto ch:s){
            if(ch=='{' or ch=='[' or ch=='(')
                st.push(ch);
            else
                switch(ch){
                    case '}': if(!st.empty() and st.top()=='{')
                                    st.pop();
                                else
                                    return false;
                                break;
                    
                    case ']': if(!st.empty() and st.top()=='[')
                                    st.pop();
                                else
                                    return false;
                                break;
                        
                    case ')': if(!st.empty() and st.top()=='(')
                                    st.pop();
                                else
                                    return false;
                                break;
                    default:
                        return false;
                }
        }
        
        return st.empty();
    }
};