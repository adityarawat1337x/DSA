class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int prev=0,ans=0;
        for(int i=0,j=0;j<s.size();j++){
            st.insert(s[j]);
            if(st.size()>prev){
                prev=st.size();
                ans=max(ans,prev);
            }else if(st.size()==prev){
                while(i<j and s[i]!=s[j]){
                    st.erase(s[i]);
                    i++;
                }
                i++;
                prev = st.size();
            }
        }
        
        return ans;
        
    }
};