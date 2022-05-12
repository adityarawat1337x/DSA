class Solution {
public:
    int balancedString(string s) {
        unordered_map<char,int> mp;
        int n = s.size()/4;
        for(auto i:s)
            mp[i]++;

        unordered_map<char,int> count;
        set<char> st;

        for(auto i:mp)
            if(i.second-n>0){
                count[i.first]=i.second-n;
                st.insert(i.first);                
            }

        int ans=INT_MAX;
        
        for(int i=0,j=0;j<s.size();j++){
            if(count.find(s[j])!=count.end()){
                count[s[j]]--;
                if(count[s[j]]==0)
                    st.erase(s[j]);
                if(st.size()==0)
                    ans = min(ans,j-i+1);
                while(st.size()==0){
                    if(count.find(s[i])!=count.end()){
                        count[s[i]]++;
                        if(count[s[i]]>0)
                            st.insert(s[i]);
                    }
                    ans = min(ans,j-i+1);
                    i++;
                }
            }
        }
        return ans==INT_MAX?0:ans;
    }
};