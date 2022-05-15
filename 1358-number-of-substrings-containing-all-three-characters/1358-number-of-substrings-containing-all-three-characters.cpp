class Solution {
public:
    int calc(int s,int i,int j,int e){
        int ans = e-j;
        return ans;
    }
    
    int sulta(string s){
        unordered_map<char,int> st;
        int ans=0;
        for(int i=0,j=0;i<s.size();i++){
            st[s[i]]++;
            while(st.size()==3){
                ans+=s.size()-i;
                st[s[j]]--;
                if(st[s[j]]==0)
                    st.erase(s[j]);
                j++;
            }
        }
        
        return ans;
    }
    int numberOfSubstrings(string s) {
       return sulta(s);
    }
};